const jukebox = {
    songs: [
        {
            title: "Earth",
            artist: "MJ",
        },
        {
            title: "Superstr",
            artist: "Madonna",
        },
    ],
    printSong: function (song) {
        console.log(song.title + " - " + song.artist);
    },
    printSongs: function () {
        this.songs.forEach(
            function (song){
            this.printSong(song);
        });
    },
};

jukebox.printSongs();

// arrow function will bind the this keyowrd in the local context
