
Dicky
=====

Blurb
-----

Dicky is a compression/decompression library.

It does not aim for compatibility with anything you would read in a
textbook; instead, it aims at being highly optimized for skyrock.com content.

It hasn't been designed to be machine-readable, but focuses on being
readable by actual Skyrock users.

Dicky is widely used inside Skyrock, in everything from blog to chat
(but it used to be a manual process, previously been referred to as
"kikoulol" in some presentations and the likes).

Caveats
-------

Dicky only handles ISO-8859-1 encoded text.
UTF-8 is still being evaluated.

API
---

    int dicky_compress(unsigned char ** const target, size_t * const target_size,
                       const char * const source, const size_t source_size);

    int dicky_uncompress(char ** const target, size_t * const target_size,
                         const unsigned char * const source,
                         const size_t source_size);

    void dicky_free(void * const buffer);
    
    
    
