/* valaccodecomment.c generated by valac, the Vala compiler
 * generated from valaccodecomment.vala, do not modify */

/* valaccodecomment.vala
 *
 * Copyright (C) 2006  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define VALA_TYPE_CCODE_NODE (vala_ccode_node_get_type ())
#define VALA_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNode))
#define VALA_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))
#define VALA_IS_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_NODE))
#define VALA_IS_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_NODE))
#define VALA_CCODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))

typedef struct _ValaCCodeNode ValaCCodeNode;
typedef struct _ValaCCodeNodeClass ValaCCodeNodeClass;
typedef struct _ValaCCodeNodePrivate ValaCCodeNodePrivate;

#define VALA_TYPE_CCODE_WRITER (vala_ccode_writer_get_type ())
#define VALA_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriter))
#define VALA_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))
#define VALA_IS_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_WRITER))
#define VALA_IS_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_WRITER))
#define VALA_CCODE_WRITER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))

typedef struct _ValaCCodeWriter ValaCCodeWriter;
typedef struct _ValaCCodeWriterClass ValaCCodeWriterClass;

#define VALA_TYPE_CCODE_COMMENT (vala_ccode_comment_get_type ())
#define VALA_CCODE_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_COMMENT, ValaCCodeComment))
#define VALA_CCODE_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_COMMENT, ValaCCodeCommentClass))
#define VALA_IS_CCODE_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_COMMENT))
#define VALA_IS_CCODE_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_COMMENT))
#define VALA_CCODE_COMMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_COMMENT, ValaCCodeCommentClass))

typedef struct _ValaCCodeComment ValaCCodeComment;
typedef struct _ValaCCodeCommentClass ValaCCodeCommentClass;
typedef struct _ValaCCodeCommentPrivate ValaCCodeCommentPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaCCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCCodeNodePrivate * priv;
};

struct _ValaCCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCCodeNode *self);
	void (*write) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_declaration) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_combined) (ValaCCodeNode* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeComment {
	ValaCCodeNode parent_instance;
	ValaCCodeCommentPrivate * priv;
};

struct _ValaCCodeCommentClass {
	ValaCCodeNodeClass parent_class;
};

struct _ValaCCodeCommentPrivate {
	gchar* _text;
};


static gpointer vala_ccode_comment_parent_class = NULL;

gpointer vala_ccode_node_ref (gpointer instance);
void vala_ccode_node_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_node (GValue* value, gpointer v_object);
void vala_value_take_ccode_node (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_node (const GValue* value);
GType vala_ccode_node_get_type (void) G_GNUC_CONST;
gpointer vala_ccode_writer_ref (gpointer instance);
void vala_ccode_writer_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_writer (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_writer (GValue* value, gpointer v_object);
void vala_value_take_ccode_writer (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_writer (const GValue* value);
GType vala_ccode_writer_get_type (void) G_GNUC_CONST;
GType vala_ccode_comment_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_COMMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_COMMENT, ValaCCodeCommentPrivate))
enum  {
	VALA_CCODE_COMMENT_DUMMY_PROPERTY
};
ValaCCodeComment* vala_ccode_comment_new (const gchar* _text);
ValaCCodeComment* vala_ccode_comment_construct (GType object_type, const gchar* _text);
ValaCCodeNode* vala_ccode_node_construct (GType object_type);
void vala_ccode_comment_set_text (ValaCCodeComment* self, const gchar* value);
static void vala_ccode_comment_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_writer_write_comment (ValaCCodeWriter* self, const gchar* text);
const gchar* vala_ccode_comment_get_text (ValaCCodeComment* self);
static void vala_ccode_comment_finalize (ValaCCodeNode* obj);


ValaCCodeComment* vala_ccode_comment_construct (GType object_type, const gchar* _text) {
	ValaCCodeComment* self = NULL;
	const gchar* _tmp0_;
	g_return_val_if_fail (_text != NULL, NULL);
	self = (ValaCCodeComment*) vala_ccode_node_construct (object_type);
	_tmp0_ = _text;
	vala_ccode_comment_set_text (self, _tmp0_);
	return self;
}


ValaCCodeComment* vala_ccode_comment_new (const gchar* _text) {
	return vala_ccode_comment_construct (VALA_TYPE_CCODE_COMMENT, _text);
}


static void vala_ccode_comment_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeComment * self;
	ValaCCodeWriter* _tmp0_;
	const gchar* _tmp1_;
	self = (ValaCCodeComment*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	_tmp1_ = self->priv->_text;
	vala_ccode_writer_write_comment (_tmp0_, _tmp1_);
}


const gchar* vala_ccode_comment_get_text (ValaCCodeComment* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_text;
	result = _tmp0_;
	return result;
}


void vala_ccode_comment_set_text (ValaCCodeComment* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_text);
	self->priv->_text = _tmp1_;
}


static void vala_ccode_comment_class_init (ValaCCodeCommentClass * klass) {
	vala_ccode_comment_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_comment_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeCommentPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_comment_real_write;
}


static void vala_ccode_comment_instance_init (ValaCCodeComment * self) {
	self->priv = VALA_CCODE_COMMENT_GET_PRIVATE (self);
}


static void vala_ccode_comment_finalize (ValaCCodeNode* obj) {
	ValaCCodeComment * self;
	self = VALA_CCODE_COMMENT (obj);
	_g_free0 (self->priv->_text);
	VALA_CCODE_NODE_CLASS (vala_ccode_comment_parent_class)->finalize (obj);
}


/**
 * Represents a comment in the C code.
 */
GType vala_ccode_comment_get_type (void) {
	static volatile gsize vala_ccode_comment_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_comment_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeCommentClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_comment_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeComment), 0, (GInstanceInitFunc) vala_ccode_comment_instance_init, NULL };
		GType vala_ccode_comment_type_id;
		vala_ccode_comment_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeComment", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_comment_type_id__volatile, vala_ccode_comment_type_id);
	}
	return vala_ccode_comment_type_id__volatile;
}



