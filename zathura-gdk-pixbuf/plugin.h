#include <zathura/plugin-api.h>

/**
 * Open a picture
 *
 * @param document Zathura document
 * @return ZATHURA_ERROR_OK when no error occurred, otherwise see
 *    zathura_error_t
 */
GIRARA_HIDDEN zathura_error_t picture_document_open(zathura_document_t* document);
