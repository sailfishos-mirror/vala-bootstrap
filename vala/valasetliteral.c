/* valasetliteral.c generated by valac, the Vala compiler
 * generated from valasetliteral.vala, do not modify */

/* valasetliteral.vala
 *
 * Copyright (C) 2009-2010  Jürg Billeter
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
#include <valagee.h>


#define VALA_TYPE_CODE_NODE (vala_code_node_get_type ())
#define VALA_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_NODE, ValaCodeNode))
#define VALA_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))
#define VALA_IS_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_NODE))
#define VALA_IS_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_NODE))
#define VALA_CODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))

typedef struct _ValaCodeNode ValaCodeNode;
typedef struct _ValaCodeNodeClass ValaCodeNodeClass;
typedef struct _ValaCodeNodePrivate ValaCodeNodePrivate;

#define VALA_TYPE_CODE_VISITOR (vala_code_visitor_get_type ())
#define VALA_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitor))
#define VALA_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))
#define VALA_IS_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_VISITOR))
#define VALA_IS_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_VISITOR))
#define VALA_CODE_VISITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))

typedef struct _ValaCodeVisitor ValaCodeVisitor;
typedef struct _ValaCodeVisitorClass ValaCodeVisitorClass;

#define VALA_TYPE_CODE_CONTEXT (vala_code_context_get_type ())
#define VALA_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContext))
#define VALA_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))
#define VALA_IS_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_CONTEXT))
#define VALA_IS_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_CONTEXT))
#define VALA_CODE_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))

typedef struct _ValaCodeContext ValaCodeContext;
typedef struct _ValaCodeContextClass ValaCodeContextClass;

#define VALA_TYPE_CODE_GENERATOR (vala_code_generator_get_type ())
#define VALA_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGenerator))
#define VALA_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))
#define VALA_IS_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_GENERATOR))
#define VALA_IS_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_GENERATOR))
#define VALA_CODE_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))

typedef struct _ValaCodeGenerator ValaCodeGenerator;
typedef struct _ValaCodeGeneratorClass ValaCodeGeneratorClass;

#define VALA_TYPE_DATA_TYPE (vala_data_type_get_type ())
#define VALA_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DATA_TYPE, ValaDataType))
#define VALA_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))
#define VALA_IS_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DATA_TYPE))
#define VALA_IS_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DATA_TYPE))
#define VALA_DATA_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))

typedef struct _ValaDataType ValaDataType;
typedef struct _ValaDataTypeClass ValaDataTypeClass;

#define VALA_TYPE_EXPRESSION (vala_expression_get_type ())
#define VALA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_EXPRESSION, ValaExpression))
#define VALA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_EXPRESSION, ValaExpressionClass))
#define VALA_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_EXPRESSION))
#define VALA_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_EXPRESSION))
#define VALA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_EXPRESSION, ValaExpressionClass))

typedef struct _ValaExpression ValaExpression;
typedef struct _ValaExpressionClass ValaExpressionClass;

#define VALA_TYPE_SYMBOL (vala_symbol_get_type ())
#define VALA_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SYMBOL, ValaSymbol))
#define VALA_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SYMBOL, ValaSymbolClass))
#define VALA_IS_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SYMBOL))
#define VALA_IS_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SYMBOL))
#define VALA_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SYMBOL, ValaSymbolClass))

typedef struct _ValaSymbol ValaSymbol;
typedef struct _ValaSymbolClass ValaSymbolClass;

#define VALA_TYPE_VARIABLE (vala_variable_get_type ())
#define VALA_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VARIABLE, ValaVariable))
#define VALA_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VARIABLE, ValaVariableClass))
#define VALA_IS_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VARIABLE))
#define VALA_IS_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VARIABLE))
#define VALA_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VARIABLE, ValaVariableClass))

typedef struct _ValaVariable ValaVariable;
typedef struct _ValaVariableClass ValaVariableClass;

#define VALA_TYPE_ATTRIBUTE (vala_attribute_get_type ())
#define VALA_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ATTRIBUTE, ValaAttribute))
#define VALA_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))
#define VALA_IS_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ATTRIBUTE))
#define VALA_IS_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ATTRIBUTE))
#define VALA_ATTRIBUTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))

typedef struct _ValaAttribute ValaAttribute;
typedef struct _ValaAttributeClass ValaAttributeClass;
typedef struct _ValaExpressionPrivate ValaExpressionPrivate;

#define VALA_TYPE_LITERAL (vala_literal_get_type ())
#define VALA_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_LITERAL, ValaLiteral))
#define VALA_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_LITERAL, ValaLiteralClass))
#define VALA_IS_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_LITERAL))
#define VALA_IS_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_LITERAL))
#define VALA_LITERAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_LITERAL, ValaLiteralClass))

typedef struct _ValaLiteral ValaLiteral;
typedef struct _ValaLiteralClass ValaLiteralClass;
typedef struct _ValaLiteralPrivate ValaLiteralPrivate;

#define VALA_TYPE_SET_LITERAL (vala_set_literal_get_type ())
#define VALA_SET_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SET_LITERAL, ValaSetLiteral))
#define VALA_SET_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SET_LITERAL, ValaSetLiteralClass))
#define VALA_IS_SET_LITERAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SET_LITERAL))
#define VALA_IS_SET_LITERAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SET_LITERAL))
#define VALA_SET_LITERAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SET_LITERAL, ValaSetLiteralClass))

typedef struct _ValaSetLiteral ValaSetLiteral;
typedef struct _ValaSetLiteralClass ValaSetLiteralClass;
typedef struct _ValaSetLiteralPrivate ValaSetLiteralPrivate;
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_NAMESPACE (vala_namespace_get_type ())
#define VALA_NAMESPACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_NAMESPACE, ValaNamespace))
#define VALA_NAMESPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_NAMESPACE, ValaNamespaceClass))
#define VALA_IS_NAMESPACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_NAMESPACE))
#define VALA_IS_NAMESPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_NAMESPACE))
#define VALA_NAMESPACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_NAMESPACE, ValaNamespaceClass))

typedef struct _ValaNamespace ValaNamespace;
typedef struct _ValaNamespaceClass ValaNamespaceClass;

#define VALA_TYPE_SCOPE (vala_scope_get_type ())
#define VALA_SCOPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SCOPE, ValaScope))
#define VALA_SCOPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SCOPE, ValaScopeClass))
#define VALA_IS_SCOPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SCOPE))
#define VALA_IS_SCOPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SCOPE))
#define VALA_SCOPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SCOPE, ValaScopeClass))

typedef struct _ValaScope ValaScope;
typedef struct _ValaScopeClass ValaScopeClass;

#define VALA_TYPE_TYPESYMBOL (vala_typesymbol_get_type ())
#define VALA_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbol))
#define VALA_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))
#define VALA_IS_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_TYPESYMBOL))
#define VALA_IS_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_TYPESYMBOL))
#define VALA_TYPESYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))

typedef struct _ValaTypeSymbol ValaTypeSymbol;
typedef struct _ValaTypeSymbolClass ValaTypeSymbolClass;

#define VALA_TYPE_OBJECT_TYPE_SYMBOL (vala_object_type_symbol_get_type ())
#define VALA_OBJECT_TYPE_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbol))
#define VALA_OBJECT_TYPE_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbolClass))
#define VALA_IS_OBJECT_TYPE_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL))
#define VALA_IS_OBJECT_TYPE_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_OBJECT_TYPE_SYMBOL))
#define VALA_OBJECT_TYPE_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbolClass))

typedef struct _ValaObjectTypeSymbol ValaObjectTypeSymbol;
typedef struct _ValaObjectTypeSymbolClass ValaObjectTypeSymbolClass;

#define VALA_TYPE_CLASS (vala_class_get_type ())
#define VALA_CLASS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CLASS, ValaClass))
#define VALA_CLASS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CLASS, ValaClassClass))
#define VALA_IS_CLASS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CLASS))
#define VALA_IS_CLASS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CLASS))
#define VALA_CLASS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CLASS, ValaClassClass))

typedef struct _ValaClass ValaClass;
typedef struct _ValaClassClass ValaClassClass;

#define VALA_TYPE_REFERENCE_TYPE (vala_reference_type_get_type ())
#define VALA_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceType))
#define VALA_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))
#define VALA_IS_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_REFERENCE_TYPE))
#define VALA_IS_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_REFERENCE_TYPE))
#define VALA_REFERENCE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))

typedef struct _ValaReferenceType ValaReferenceType;
typedef struct _ValaReferenceTypeClass ValaReferenceTypeClass;

#define VALA_TYPE_OBJECT_TYPE (vala_object_type_get_type ())
#define VALA_OBJECT_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_OBJECT_TYPE, ValaObjectType))
#define VALA_OBJECT_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_OBJECT_TYPE, ValaObjectTypeClass))
#define VALA_IS_OBJECT_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_OBJECT_TYPE))
#define VALA_IS_OBJECT_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_OBJECT_TYPE))
#define VALA_OBJECT_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_OBJECT_TYPE, ValaObjectTypeClass))

typedef struct _ValaObjectType ValaObjectType;
typedef struct _ValaObjectTypeClass ValaObjectTypeClass;

struct _ValaCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCodeNodePrivate * priv;
	GList* attributes;
};

struct _ValaCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCodeNode *self);
	void (*accept) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	void (*accept_children) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	gboolean (*check) (ValaCodeNode* self, ValaCodeContext* context);
	void (*emit) (ValaCodeNode* self, ValaCodeGenerator* codegen);
	void (*replace_type) (ValaCodeNode* self, ValaDataType* old_type, ValaDataType* new_type);
	void (*replace_expression) (ValaCodeNode* self, ValaExpression* old_node, ValaExpression* new_node);
	gchar* (*to_string) (ValaCodeNode* self);
	void (*get_defined_variables) (ValaCodeNode* self, ValaCollection* collection);
	void (*get_used_variables) (ValaCodeNode* self, ValaCollection* collection);
};

struct _ValaExpression {
	ValaCodeNode parent_instance;
	ValaExpressionPrivate * priv;
};

struct _ValaExpressionClass {
	ValaCodeNodeClass parent_class;
	gboolean (*is_constant) (ValaExpression* self);
	gboolean (*is_pure) (ValaExpression* self);
	gboolean (*is_non_null) (ValaExpression* self);
};

struct _ValaLiteral {
	ValaExpression parent_instance;
	ValaLiteralPrivate * priv;
};

struct _ValaLiteralClass {
	ValaExpressionClass parent_class;
};

struct _ValaSetLiteral {
	ValaLiteral parent_instance;
	ValaSetLiteralPrivate * priv;
};

struct _ValaSetLiteralClass {
	ValaLiteralClass parent_class;
};

struct _ValaSetLiteralPrivate {
	ValaList* expression_list;
	ValaDataType* _element_type;
};


static gpointer vala_set_literal_parent_class = NULL;

gpointer vala_code_node_ref (gpointer instance);
void vala_code_node_unref (gpointer instance);
GParamSpec* vala_param_spec_code_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_node (GValue* value, gpointer v_object);
void vala_value_take_code_node (GValue* value, gpointer v_object);
gpointer vala_value_get_code_node (const GValue* value);
GType vala_code_node_get_type (void) G_GNUC_CONST;
gpointer vala_code_visitor_ref (gpointer instance);
void vala_code_visitor_unref (gpointer instance);
GParamSpec* vala_param_spec_code_visitor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_visitor (GValue* value, gpointer v_object);
void vala_value_take_code_visitor (GValue* value, gpointer v_object);
gpointer vala_value_get_code_visitor (const GValue* value);
GType vala_code_visitor_get_type (void) G_GNUC_CONST;
gpointer vala_code_context_ref (gpointer instance);
void vala_code_context_unref (gpointer instance);
GParamSpec* vala_param_spec_code_context (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_context (GValue* value, gpointer v_object);
void vala_value_take_code_context (GValue* value, gpointer v_object);
gpointer vala_value_get_code_context (const GValue* value);
GType vala_code_context_get_type (void) G_GNUC_CONST;
GType vala_code_generator_get_type (void) G_GNUC_CONST;
GType vala_data_type_get_type (void) G_GNUC_CONST;
GType vala_expression_get_type (void) G_GNUC_CONST;
GType vala_symbol_get_type (void) G_GNUC_CONST;
GType vala_variable_get_type (void) G_GNUC_CONST;
GType vala_attribute_get_type (void) G_GNUC_CONST;
GType vala_literal_get_type (void) G_GNUC_CONST;
GType vala_set_literal_get_type (void) G_GNUC_CONST;
#define VALA_SET_LITERAL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_SET_LITERAL, ValaSetLiteralPrivate))
enum  {
	VALA_SET_LITERAL_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaSetLiteral* vala_set_literal_new (ValaSourceReference* source_reference);
ValaSetLiteral* vala_set_literal_construct (GType object_type, ValaSourceReference* source_reference);
ValaLiteral* vala_literal_construct (GType object_type);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
static void vala_set_literal_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
static void vala_set_literal_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_set_literal (ValaCodeVisitor* self, ValaSetLiteral* lit);
void vala_code_visitor_visit_expression (ValaCodeVisitor* self, ValaExpression* expr);
void vala_set_literal_add_expression (ValaSetLiteral* self, ValaExpression* expr);
void vala_code_node_set_parent_node (ValaCodeNode* self, ValaCodeNode* value);
ValaList* vala_set_literal_get_expressions (ValaSetLiteral* self);
static gboolean vala_set_literal_real_is_pure (ValaExpression* base);
static void vala_set_literal_real_replace_expression (ValaCodeNode* base, ValaExpression* old_node, ValaExpression* new_node);
static gboolean vala_set_literal_real_check (ValaCodeNode* base, ValaCodeContext* context);
gboolean vala_code_node_get_checked (ValaCodeNode* self);
gboolean vala_code_node_get_error (ValaCodeNode* self);
void vala_code_node_set_checked (ValaCodeNode* self, gboolean value);
GType vala_namespace_get_type (void) G_GNUC_CONST;
ValaNamespace* vala_code_context_get_root (ValaCodeContext* self);
gpointer vala_scope_ref (gpointer instance);
void vala_scope_unref (gpointer instance);
GParamSpec* vala_param_spec_scope (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_scope (GValue* value, gpointer v_object);
void vala_value_take_scope (GValue* value, gpointer v_object);
gpointer vala_value_get_scope (const GValue* value);
GType vala_scope_get_type (void) G_GNUC_CONST;
ValaScope* vala_symbol_get_scope (ValaSymbol* self);
ValaSymbol* vala_scope_lookup (ValaScope* self, const gchar* name);
GType vala_typesymbol_get_type (void) G_GNUC_CONST;
GType vala_object_type_symbol_get_type (void) G_GNUC_CONST;
GType vala_class_get_type (void) G_GNUC_CONST;
ValaObjectType* vala_object_type_new (ValaObjectTypeSymbol* type_symbol);
ValaObjectType* vala_object_type_construct (GType object_type, ValaObjectTypeSymbol* type_symbol);
GType vala_reference_type_get_type (void) G_GNUC_CONST;
GType vala_object_type_get_type (void) G_GNUC_CONST;
void vala_data_type_set_value_owned (ValaDataType* self, gboolean value);
ValaDataType* vala_expression_get_target_type (ValaExpression* self);
ValaTypeSymbol* vala_data_type_get_data_type (ValaDataType* self);
ValaList* vala_data_type_get_type_arguments (ValaDataType* self);
ValaDataType* vala_data_type_copy (ValaDataType* self);
static void vala_set_literal_set_element_type (ValaSetLiteral* self, ValaDataType* value);
ValaDataType* vala_set_literal_get_element_type (ValaSetLiteral* self);
void vala_expression_set_target_type (ValaExpression* self, ValaDataType* value);
gboolean vala_code_node_check (ValaCodeNode* self, ValaCodeContext* context);
ValaDataType* vala_expression_get_value_type (ValaExpression* self);
void vala_code_node_set_error (ValaCodeNode* self, gboolean value);
void vala_report_error (ValaSourceReference* source, const gchar* message);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
void vala_data_type_add_type_argument (ValaDataType* self, ValaDataType* arg);
void vala_expression_set_value_type (ValaExpression* self, ValaDataType* value);
static void vala_set_literal_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen);
void vala_code_node_emit (ValaCodeNode* self, ValaCodeGenerator* codegen);
static void vala_set_literal_finalize (ValaCodeNode* obj);


ValaSetLiteral* vala_set_literal_construct (GType object_type, ValaSourceReference* source_reference) {
	ValaSetLiteral* self = NULL;
	ValaSourceReference* _tmp0_;
	self = (ValaSetLiteral*) vala_literal_construct (object_type);
	_tmp0_ = source_reference;
	vala_code_node_set_source_reference ((ValaCodeNode*) self, _tmp0_);
	return self;
}


ValaSetLiteral* vala_set_literal_new (ValaSourceReference* source_reference) {
	return vala_set_literal_construct (VALA_TYPE_SET_LITERAL, source_reference);
}


static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


static void vala_set_literal_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaSetLiteral * self;
	self = (ValaSetLiteral*) base;
	g_return_if_fail (visitor != NULL);
	{
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		ValaList* _expr_list;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _expr_size;
		gint _expr_index;
		_tmp0_ = self->priv->expression_list;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_expr_list = _tmp1_;
		_tmp2_ = _expr_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_expr_size = _tmp4_;
		_expr_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			ValaList* _tmp8_;
			gint _tmp9_;
			gpointer _tmp10_ = NULL;
			ValaExpression* expr;
			ValaExpression* _tmp11_;
			ValaCodeVisitor* _tmp12_;
			_tmp5_ = _expr_index;
			_expr_index = _tmp5_ + 1;
			_tmp6_ = _expr_index;
			_tmp7_ = _expr_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _expr_list;
			_tmp9_ = _expr_index;
			_tmp10_ = vala_list_get (_tmp8_, _tmp9_);
			expr = (ValaExpression*) _tmp10_;
			_tmp11_ = expr;
			_tmp12_ = visitor;
			vala_code_node_accept ((ValaCodeNode*) _tmp11_, _tmp12_);
			_vala_code_node_unref0 (expr);
		}
		_vala_iterable_unref0 (_expr_list);
	}
}


static void vala_set_literal_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaSetLiteral * self;
	ValaCodeVisitor* _tmp0_;
	ValaCodeVisitor* _tmp1_;
	self = (ValaSetLiteral*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = visitor;
	vala_code_visitor_visit_set_literal (_tmp0_, self);
	_tmp1_ = visitor;
	vala_code_visitor_visit_expression (_tmp1_, (ValaExpression*) self);
}


void vala_set_literal_add_expression (ValaSetLiteral* self, ValaExpression* expr) {
	ValaList* _tmp0_;
	ValaExpression* _tmp1_;
	ValaExpression* _tmp2_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	_tmp0_ = self->priv->expression_list;
	_tmp1_ = expr;
	vala_collection_add ((ValaCollection*) _tmp0_, _tmp1_);
	_tmp2_ = expr;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
}


ValaList* vala_set_literal_get_expressions (ValaSetLiteral* self) {
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->expression_list;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static gboolean vala_set_literal_real_is_pure (ValaExpression* base) {
	ValaSetLiteral * self;
	gboolean result = FALSE;
	self = (ValaSetLiteral*) base;
	result = FALSE;
	return result;
}


static void vala_set_literal_real_replace_expression (ValaCodeNode* base, ValaExpression* old_node, ValaExpression* new_node) {
	ValaSetLiteral * self;
	self = (ValaSetLiteral*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	{
		gint i;
		i = 0;
		{
			gboolean _tmp0_;
			_tmp0_ = TRUE;
			while (TRUE) {
				gboolean _tmp1_;
				gint _tmp3_;
				ValaList* _tmp4_;
				gint _tmp5_;
				gint _tmp6_;
				ValaList* _tmp7_;
				gint _tmp8_;
				gpointer _tmp9_ = NULL;
				ValaExpression* _tmp10_;
				ValaExpression* _tmp11_;
				gboolean _tmp12_;
				_tmp1_ = _tmp0_;
				if (!_tmp1_) {
					gint _tmp2_;
					_tmp2_ = i;
					i = _tmp2_ + 1;
				}
				_tmp0_ = FALSE;
				_tmp3_ = i;
				_tmp4_ = self->priv->expression_list;
				_tmp5_ = vala_collection_get_size ((ValaCollection*) _tmp4_);
				_tmp6_ = _tmp5_;
				if (!(_tmp3_ < _tmp6_)) {
					break;
				}
				_tmp7_ = self->priv->expression_list;
				_tmp8_ = i;
				_tmp9_ = vala_list_get (_tmp7_, _tmp8_);
				_tmp10_ = (ValaExpression*) _tmp9_;
				_tmp11_ = old_node;
				_tmp12_ = _tmp10_ == _tmp11_;
				_vala_code_node_unref0 (_tmp10_);
				if (_tmp12_) {
					ValaList* _tmp13_;
					gint _tmp14_;
					ValaExpression* _tmp15_;
					_tmp13_ = self->priv->expression_list;
					_tmp14_ = i;
					_tmp15_ = new_node;
					vala_list_set (_tmp13_, _tmp14_, _tmp15_);
				}
			}
		}
	}
}


static gboolean vala_set_literal_real_check (ValaCodeNode* base, ValaCodeContext* context) {
	ValaSetLiteral * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaCodeContext* _tmp4_;
	ValaNamespace* _tmp5_;
	ValaNamespace* _tmp6_;
	ValaScope* _tmp7_;
	ValaScope* _tmp8_;
	ValaSymbol* _tmp9_ = NULL;
	ValaSymbol* _tmp10_;
	ValaScope* _tmp11_;
	ValaScope* _tmp12_;
	ValaSymbol* _tmp13_ = NULL;
	ValaClass* _tmp14_;
	ValaObjectType* _tmp15_;
	ValaObjectType* _tmp16_;
	ValaObjectType* set_type;
	ValaObjectType* _tmp17_;
	gboolean fixed_element_type;
	gboolean _tmp18_ = FALSE;
	gboolean _tmp19_ = FALSE;
	ValaDataType* _tmp20_;
	ValaDataType* _tmp21_;
	gboolean _tmp29_;
	gboolean _tmp36_;
	ValaDataType* _tmp72_;
	ValaDataType* _tmp75_;
	ValaDataType* _tmp76_ = NULL;
	ValaDataType* _tmp77_;
	ValaDataType* _tmp78_;
	ValaObjectType* _tmp79_;
	ValaDataType* _tmp80_;
	ValaObjectType* _tmp81_;
	gboolean _tmp82_;
	gboolean _tmp83_;
	self = (ValaSetLiteral*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_code_node_get_checked ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	_tmp4_ = context;
	_tmp5_ = vala_code_context_get_root (_tmp4_);
	_tmp6_ = _tmp5_;
	_tmp7_ = vala_symbol_get_scope ((ValaSymbol*) _tmp6_);
	_tmp8_ = _tmp7_;
	_tmp9_ = vala_scope_lookup (_tmp8_, "Dova");
	_tmp10_ = _tmp9_;
	_tmp11_ = vala_symbol_get_scope (_tmp10_);
	_tmp12_ = _tmp11_;
	_tmp13_ = vala_scope_lookup (_tmp12_, "Set");
	_tmp14_ = VALA_CLASS (_tmp13_);
	_tmp15_ = vala_object_type_new ((ValaObjectTypeSymbol*) _tmp14_);
	_tmp16_ = _tmp15_;
	_vala_code_node_unref0 (_tmp14_);
	_vala_code_node_unref0 (_tmp10_);
	set_type = _tmp16_;
	_tmp17_ = set_type;
	vala_data_type_set_value_owned ((ValaDataType*) _tmp17_, TRUE);
	fixed_element_type = FALSE;
	_tmp20_ = vala_expression_get_target_type ((ValaExpression*) self);
	_tmp21_ = _tmp20_;
	if (_tmp21_ != NULL) {
		ValaDataType* _tmp22_;
		ValaDataType* _tmp23_;
		ValaTypeSymbol* _tmp24_;
		ValaTypeSymbol* _tmp25_;
		ValaObjectType* _tmp26_;
		ValaTypeSymbol* _tmp27_;
		ValaTypeSymbol* _tmp28_;
		_tmp22_ = vala_expression_get_target_type ((ValaExpression*) self);
		_tmp23_ = _tmp22_;
		_tmp24_ = vala_data_type_get_data_type (_tmp23_);
		_tmp25_ = _tmp24_;
		_tmp26_ = set_type;
		_tmp27_ = vala_data_type_get_data_type ((ValaDataType*) _tmp26_);
		_tmp28_ = _tmp27_;
		_tmp19_ = _tmp25_ == _tmp28_;
	} else {
		_tmp19_ = FALSE;
	}
	_tmp29_ = _tmp19_;
	if (_tmp29_) {
		ValaDataType* _tmp30_;
		ValaDataType* _tmp31_;
		ValaList* _tmp32_ = NULL;
		ValaList* _tmp33_;
		gint _tmp34_;
		gint _tmp35_;
		_tmp30_ = vala_expression_get_target_type ((ValaExpression*) self);
		_tmp31_ = _tmp30_;
		_tmp32_ = vala_data_type_get_type_arguments (_tmp31_);
		_tmp33_ = _tmp32_;
		_tmp34_ = vala_collection_get_size ((ValaCollection*) _tmp33_);
		_tmp35_ = _tmp34_;
		_tmp18_ = _tmp35_ == 1;
		_vala_iterable_unref0 (_tmp33_);
	} else {
		_tmp18_ = FALSE;
	}
	_tmp36_ = _tmp18_;
	if (_tmp36_) {
		ValaDataType* _tmp37_;
		ValaDataType* _tmp38_;
		ValaList* _tmp39_ = NULL;
		ValaList* _tmp40_;
		gpointer _tmp41_ = NULL;
		ValaDataType* _tmp42_;
		ValaDataType* _tmp43_ = NULL;
		ValaDataType* _tmp44_;
		ValaDataType* _tmp45_;
		_tmp37_ = vala_expression_get_target_type ((ValaExpression*) self);
		_tmp38_ = _tmp37_;
		_tmp39_ = vala_data_type_get_type_arguments (_tmp38_);
		_tmp40_ = _tmp39_;
		_tmp41_ = vala_list_get (_tmp40_, 0);
		_tmp42_ = (ValaDataType*) _tmp41_;
		_tmp43_ = vala_data_type_copy (_tmp42_);
		_tmp44_ = _tmp43_;
		vala_set_literal_set_element_type (self, _tmp44_);
		_vala_code_node_unref0 (_tmp44_);
		_vala_code_node_unref0 (_tmp42_);
		_vala_iterable_unref0 (_tmp40_);
		_tmp45_ = self->priv->_element_type;
		vala_data_type_set_value_owned (_tmp45_, FALSE);
		fixed_element_type = TRUE;
	}
	{
		gint i;
		i = 0;
		{
			gboolean _tmp46_;
			_tmp46_ = TRUE;
			while (TRUE) {
				gboolean _tmp47_;
				gint _tmp49_;
				ValaList* _tmp50_;
				gint _tmp51_;
				gint _tmp52_;
				ValaList* _tmp53_;
				gint _tmp54_;
				gpointer _tmp55_ = NULL;
				ValaExpression* expr;
				gboolean _tmp56_;
				ValaExpression* _tmp59_;
				ValaCodeContext* _tmp60_;
				gboolean _tmp61_ = FALSE;
				ValaList* _tmp62_;
				gint _tmp63_;
				gpointer _tmp64_ = NULL;
				ValaDataType* _tmp65_;
				_tmp47_ = _tmp46_;
				if (!_tmp47_) {
					gint _tmp48_;
					_tmp48_ = i;
					i = _tmp48_ + 1;
				}
				_tmp46_ = FALSE;
				_tmp49_ = i;
				_tmp50_ = self->priv->expression_list;
				_tmp51_ = vala_collection_get_size ((ValaCollection*) _tmp50_);
				_tmp52_ = _tmp51_;
				if (!(_tmp49_ < _tmp52_)) {
					break;
				}
				_tmp53_ = self->priv->expression_list;
				_tmp54_ = i;
				_tmp55_ = vala_list_get (_tmp53_, _tmp54_);
				expr = (ValaExpression*) _tmp55_;
				_tmp56_ = fixed_element_type;
				if (_tmp56_) {
					ValaExpression* _tmp57_;
					ValaDataType* _tmp58_;
					_tmp57_ = expr;
					_tmp58_ = self->priv->_element_type;
					vala_expression_set_target_type (_tmp57_, _tmp58_);
				}
				_tmp59_ = expr;
				_tmp60_ = context;
				_tmp61_ = vala_code_node_check ((ValaCodeNode*) _tmp59_, _tmp60_);
				if (!_tmp61_) {
					result = FALSE;
					_vala_code_node_unref0 (expr);
					_vala_code_node_unref0 (set_type);
					return result;
				}
				_tmp62_ = self->priv->expression_list;
				_tmp63_ = i;
				_tmp64_ = vala_list_get (_tmp62_, _tmp63_);
				_vala_code_node_unref0 (expr);
				expr = (ValaExpression*) _tmp64_;
				_tmp65_ = self->priv->_element_type;
				if (_tmp65_ == NULL) {
					ValaExpression* _tmp66_;
					ValaDataType* _tmp67_;
					ValaDataType* _tmp68_;
					ValaDataType* _tmp69_ = NULL;
					ValaDataType* _tmp70_;
					ValaDataType* _tmp71_;
					_tmp66_ = expr;
					_tmp67_ = vala_expression_get_value_type (_tmp66_);
					_tmp68_ = _tmp67_;
					_tmp69_ = vala_data_type_copy (_tmp68_);
					_tmp70_ = _tmp69_;
					vala_set_literal_set_element_type (self, _tmp70_);
					_vala_code_node_unref0 (_tmp70_);
					_tmp71_ = self->priv->_element_type;
					vala_data_type_set_value_owned (_tmp71_, FALSE);
				}
				_vala_code_node_unref0 (expr);
			}
		}
	}
	_tmp72_ = self->priv->_element_type;
	if (_tmp72_ == NULL) {
		ValaSourceReference* _tmp73_;
		ValaSourceReference* _tmp74_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp73_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp74_ = _tmp73_;
		vala_report_error (_tmp74_, "cannot infer element type for set literal");
		result = FALSE;
		_vala_code_node_unref0 (set_type);
		return result;
	}
	_tmp75_ = self->priv->_element_type;
	_tmp76_ = vala_data_type_copy (_tmp75_);
	_tmp77_ = _tmp76_;
	vala_set_literal_set_element_type (self, _tmp77_);
	_vala_code_node_unref0 (_tmp77_);
	_tmp78_ = self->priv->_element_type;
	vala_data_type_set_value_owned (_tmp78_, TRUE);
	_tmp79_ = set_type;
	_tmp80_ = self->priv->_element_type;
	vala_data_type_add_type_argument ((ValaDataType*) _tmp79_, _tmp80_);
	_tmp81_ = set_type;
	vala_expression_set_value_type ((ValaExpression*) self, (ValaDataType*) _tmp81_);
	_tmp82_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp83_ = _tmp82_;
	result = !_tmp83_;
	_vala_code_node_unref0 (set_type);
	return result;
}


static void vala_set_literal_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen) {
	ValaSetLiteral * self;
	ValaCodeGenerator* _tmp13_;
	ValaCodeGenerator* _tmp14_;
	self = (ValaSetLiteral*) base;
	g_return_if_fail (codegen != NULL);
	{
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		ValaList* _expr_list;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _expr_size;
		gint _expr_index;
		_tmp0_ = self->priv->expression_list;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_expr_list = _tmp1_;
		_tmp2_ = _expr_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_expr_size = _tmp4_;
		_expr_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			ValaList* _tmp8_;
			gint _tmp9_;
			gpointer _tmp10_ = NULL;
			ValaExpression* expr;
			ValaExpression* _tmp11_;
			ValaCodeGenerator* _tmp12_;
			_tmp5_ = _expr_index;
			_expr_index = _tmp5_ + 1;
			_tmp6_ = _expr_index;
			_tmp7_ = _expr_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _expr_list;
			_tmp9_ = _expr_index;
			_tmp10_ = vala_list_get (_tmp8_, _tmp9_);
			expr = (ValaExpression*) _tmp10_;
			_tmp11_ = expr;
			_tmp12_ = codegen;
			vala_code_node_emit ((ValaCodeNode*) _tmp11_, _tmp12_);
			_vala_code_node_unref0 (expr);
		}
		_vala_iterable_unref0 (_expr_list);
	}
	_tmp13_ = codegen;
	vala_code_visitor_visit_set_literal ((ValaCodeVisitor*) _tmp13_, self);
	_tmp14_ = codegen;
	vala_code_visitor_visit_expression ((ValaCodeVisitor*) _tmp14_, (ValaExpression*) self);
}


ValaDataType* vala_set_literal_get_element_type (ValaSetLiteral* self) {
	ValaDataType* result;
	ValaDataType* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_element_type;
	result = _tmp0_;
	return result;
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static void vala_set_literal_set_element_type (ValaSetLiteral* self, ValaDataType* value) {
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_code_node_ref0 (_tmp0_);
	_vala_code_node_unref0 (self->priv->_element_type);
	self->priv->_element_type = _tmp1_;
}


static void vala_set_literal_class_init (ValaSetLiteralClass * klass) {
	vala_set_literal_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_set_literal_finalize;
	g_type_class_add_private (klass, sizeof (ValaSetLiteralPrivate));
	VALA_CODE_NODE_CLASS (klass)->accept_children = vala_set_literal_real_accept_children;
	VALA_CODE_NODE_CLASS (klass)->accept = vala_set_literal_real_accept;
	VALA_EXPRESSION_CLASS (klass)->is_pure = vala_set_literal_real_is_pure;
	VALA_CODE_NODE_CLASS (klass)->replace_expression = vala_set_literal_real_replace_expression;
	VALA_CODE_NODE_CLASS (klass)->check = vala_set_literal_real_check;
	VALA_CODE_NODE_CLASS (klass)->emit = vala_set_literal_real_emit;
}


static void vala_set_literal_instance_init (ValaSetLiteral * self) {
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = VALA_SET_LITERAL_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_EXPRESSION, (GBoxedCopyFunc) vala_code_node_ref, vala_code_node_unref, _tmp0_);
	self->priv->expression_list = (ValaList*) _tmp1_;
}


static void vala_set_literal_finalize (ValaCodeNode* obj) {
	ValaSetLiteral * self;
	self = VALA_SET_LITERAL (obj);
	_vala_iterable_unref0 (self->priv->expression_list);
	_vala_code_node_unref0 (self->priv->_element_type);
	VALA_CODE_NODE_CLASS (vala_set_literal_parent_class)->finalize (obj);
}


GType vala_set_literal_get_type (void) {
	static volatile gsize vala_set_literal_type_id__volatile = 0;
	if (g_once_init_enter (&vala_set_literal_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaSetLiteralClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_set_literal_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaSetLiteral), 0, (GInstanceInitFunc) vala_set_literal_instance_init, NULL };
		GType vala_set_literal_type_id;
		vala_set_literal_type_id = g_type_register_static (VALA_TYPE_LITERAL, "ValaSetLiteral", &g_define_type_info, 0);
		g_once_init_leave (&vala_set_literal_type_id__volatile, vala_set_literal_type_id);
	}
	return vala_set_literal_type_id__volatile;
}


