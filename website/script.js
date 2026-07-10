// Minimal site script: hide the loader and enable basic UI interactions
(function () {
  function ready(fn) {
    if (document.readyState !== 'loading') fn();
    else document.addEventListener('DOMContentLoaded', fn);
  }

  ready(function () {
    // Hide and remove loader
    var loader = document.getElementById('loader');
    if (loader) {
      loader.classList.add('is-hidden');
      setTimeout(function () { try { loader.remove(); } catch (e) {} }, 700);
    }

    // Footer year
    var yearEl = document.getElementById('year');
    if (yearEl) yearEl.textContent = new Date().getFullYear();

    // Back-to-top button (use class toggling to match CSS)
    var back = document.getElementById('backToTop');
    if (back) {
      window.addEventListener('scroll', function () {
        back.classList.toggle('is-visible', window.scrollY > 300);
      });
      back.addEventListener('click', function () { window.scrollTo({ top: 0, behavior: 'smooth' }); });
    }

    // Mobile hamburger
    var ham = document.getElementById('hamburger');
    var navLinks = document.getElementById('navLinks');
    if (ham) {
      ham.addEventListener('click', function () {
        ham.classList.toggle('is-open');
        if (navLinks) navLinks.classList.toggle('is-open');
        var expanded = ham.getAttribute('aria-expanded') === 'true';
        ham.setAttribute('aria-expanded', String(!expanded));
      });
    }

    // Simple gallery lightbox
    var galleryBtns = document.querySelectorAll('.gallery-item');
    var lightbox = document.getElementById('lightbox');
    var lbImg = document.getElementById('lightboxImage');
    var lbCaption = document.getElementById('lightboxCaption');
    var lbClose = document.getElementById('lightboxClose');
    galleryBtns.forEach(function (btn) {
      btn.addEventListener('click', function () {
        if (!lightbox || !lbImg) return;
        var img = btn.querySelector('img');
        lbImg.src = img ? img.src : '';
        lbCaption.textContent = btn.dataset.caption || '';
        lightbox.hidden = false;
        lbClose && lbClose.focus();
      });
    });
    lbClose && lbClose.addEventListener('click', function () { if (lightbox) { lightbox.hidden = true; lbImg.src = ''; } });

    // Reveal animations: make `.reveal` elements visible
    var reveals = Array.prototype.slice.call(document.querySelectorAll('.reveal'));
    if (reveals.length) {
      // Quick initial reveal for browsers without IntersectionObserver
      reveals.forEach(function (el, i) { setTimeout(function () { el.classList.add('is-visible'); }, 80 * i); });
      // Also use IntersectionObserver to reveal on scroll when supported
      if ('IntersectionObserver' in window) {
        var obs = new IntersectionObserver(function (entries) {
          entries.forEach(function (entry) {
            if (entry.isIntersecting) { entry.target.classList.add('is-visible'); obs.unobserve(entry.target); }
          });
        }, { threshold: 0.12 });
        reveals.forEach(function (el) { obs.observe(el); });
      }
    }
  });
})();
