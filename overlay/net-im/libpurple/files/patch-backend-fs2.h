#
#
# patch "libpurple/media/backend-fs2.h"
#  from [981dbbbe62ab919d049c4f2fd6ed5f7ead69b23c]
#    to [d0c98270d331a2386413bdc2057c6dac0da72c28]
#
============================================================
--- libpurple/media/backend-fs2.h	981dbbbe62ab919d049c4f2fd6ed5f7ead69b23c
+++ libpurple/media/backend-fs2.h	d0c98270d331a2386413bdc2057c6dac0da72c28
@@ -55,6 +55,7 @@ GType purple_media_backend_fs2_get_type(
  */
 GType purple_media_backend_fs2_get_type(void);
 
+#ifdef USE_GSTREAMER
 /*
  * Temporary function in order to be able to test while
  * integrating with PurpleMedia
@@ -71,6 +72,7 @@ void purple_media_backend_fs2_set_output
 void purple_media_backend_fs2_set_output_volume(PurpleMediaBackendFs2 *self,
 		const gchar *sess_id, const gchar *who, double level);
 /* end tmp */
+#endif /* USE_GSTREAMER */
 
 G_END_DECLS
 
