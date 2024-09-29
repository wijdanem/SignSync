let currentSlide = 0;
const slides = document.querySelectorAll(".slide");
const totalSlides = slides.length;

function showSlide(index) {
    slides.forEach((slide, i) => {
        slide.classList.remove("active");
        slide.style.transform = `translateX(${(i - index) * 100}%)`;
    });
    slides[index].classList.add("active");
}

function moveSlide(n) {
    currentSlide = (currentSlide + n + totalSlides) % totalSlides;
    showSlide(currentSlide);
}

// Set an initial state for the slides
showSlide(currentSlide);

// Auto transition every 3 seconds
setInterval(() => {
    moveSlide(1);
}, 3000);