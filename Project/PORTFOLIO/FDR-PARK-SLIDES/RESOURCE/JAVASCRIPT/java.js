var mainShow = document.querySelectorAll
('[data-component="mainSlideshow"]');

mainShow.forEach(initMainSlideShow);

function initMainSlideShow(mainSlideshow) {
	var slides = document.querySelectorAll
	(`#${mainSlide.id} .mainSlides`);

	var index = 0, time = 7000;
	slides[index].classList.add('active');
	setInterval( () => {
		slides[index].classList.remove('active');

		index++;
		if (index === slides.length) index = 0;

		slides[index].classList.add('active');

	}, time);
	}
