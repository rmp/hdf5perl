/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of Hdf5.xs. Do not edit this file, edit Hdf5.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "Hdf5.xs"
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include </home/user/hdf5/include/hdf5.h>

#include "const-c.inc"

#include <stdint.h>

#line 23 "Hdf5.c"
#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#ifndef PERL_ARGS_ASSERT_CROAK_XS_USAGE
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)

/* prototype to pass -Wmissing-prototypes */
STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params);

STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params)
{
    const GV *const gv = CvGV(cv);

    PERL_ARGS_ASSERT_CROAK_XS_USAGE;

    if (gv) {
        const char *const gvname = GvNAME(gv);
        const HV *const stash = GvSTASH(gv);
        const char *const hvname = stash ? HvNAME(stash) : NULL;

        if (hvname)
            Perl_croak(aTHX_ "Usage: %s::%s(%s)", hvname, gvname, params);
        else
            Perl_croak(aTHX_ "Usage: %s(%s)", gvname, params);
    } else {
        /* Pants. I don't think that it should be possible to get here. */
        Perl_croak(aTHX_ "Usage: CODE(0x%"UVxf")(%s)", PTR2UV(cv), params);
    }
}
#undef  PERL_ARGS_ASSERT_CROAK_XS_USAGE

#ifdef PERL_IMPLICIT_CONTEXT
#define croak_xs_usage(a,b)	S_croak_xs_usage(aTHX_ a,b)
#else
#define croak_xs_usage		S_croak_xs_usage
#endif

#endif

/* NOTE: the prototype of newXSproto() is different in versions of perls,
 * so we define a portable version of newXSproto()
 */
#ifdef newXS_flags
#define newXSproto_portable(name, c_impl, file, proto) newXS_flags(name, c_impl, file, proto, 0)
#else
#define newXSproto_portable(name, c_impl, file, proto) (PL_Sv=(SV*)newXS(name, c_impl, file), sv_setpv(PL_Sv, proto), (CV*)PL_Sv)
#endif /* !defined(newXS_flags) */

#line 75 "Hdf5.c"

/* INCLUDE:  Including 'const-xs.inc' from 'Hdf5.xs' */


XS(XS_Hdf5_constant); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_constant)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "sv");
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
#line 4 "./const-xs.inc"
#ifdef dXSTARG
	dXSTARG; /* Faster if we have it.  */
#else
	dTARGET;
#endif
	STRLEN		len;
        int		type;
	/* IV		iv;	Uncomment this if you need to return IVs */
	/* NV		nv;	Uncomment this if you need to return NVs */
	/* const char	*pv;	Uncomment this if you need to return PVs */
#line 104 "Hdf5.c"
	SV *	sv = ST(0);
	const char *	s = SvPV(sv, len);
#line 18 "./const-xs.inc"
	type = constant(aTHX_ s, len);
      /* Return 1 or 2 items. First is error message, or undef if no error.
           Second, if present, is found value */
        switch (type) {
        case PERL_constant_NOTFOUND:
          sv =
	    sv_2mortal(newSVpvf("%s is not a valid Hdf5 macro", s));
          PUSHs(sv);
          break;
        case PERL_constant_NOTDEF:
          sv = sv_2mortal(newSVpvf(
	    "Your vendor has not defined Hdf5 macro %s, used",
				   s));
          PUSHs(sv);
          break;
	/* Uncomment this if you need to return IVs
        case PERL_constant_ISIV:
          EXTEND(SP, 1);
          PUSHs(&PL_sv_undef);
          PUSHi(iv);
          break; */
	/* Uncomment this if you need to return NOs
        case PERL_constant_ISNO:
          EXTEND(SP, 1);
          PUSHs(&PL_sv_undef);
          PUSHs(&PL_sv_no);
          break; */
	/* Uncomment this if you need to return NVs
        case PERL_constant_ISNV:
          EXTEND(SP, 1);
          PUSHs(&PL_sv_undef);
          PUSHn(nv);
          break; */
	/* Uncomment this if you need to return PVs
        case PERL_constant_ISPV:
          EXTEND(SP, 1);
          PUSHs(&PL_sv_undef);
          PUSHp(pv, strlen(pv));
          break; */
	/* Uncomment this if you need to return PVNs
        case PERL_constant_ISPVN:
          EXTEND(SP, 1);
          PUSHs(&PL_sv_undef);
          PUSHp(pv, iv);
          break; */
	/* Uncomment this if you need to return SVs
        case PERL_constant_ISSV:
          EXTEND(SP, 1);
          PUSHs(&PL_sv_undef);
          PUSHs(sv);
          break; */
	/* Uncomment this if you need to return UNDEFs
        case PERL_constant_ISUNDEF:
          break; */
	/* Uncomment this if you need to return UVs
        case PERL_constant_ISUV:
          EXTEND(SP, 1);
          PUSHs(&PL_sv_undef);
          PUSHu((UV)iv);
          break; */
	/* Uncomment this if you need to return YESs
        case PERL_constant_ISYES:
          EXTEND(SP, 1);
          PUSHs(&PL_sv_undef);
          PUSHs(&PL_sv_yes);
          break; */
        default:
          sv = sv_2mortal(newSVpvf(
	    "Unexpected return type %d while processing Hdf5 macro %s, used",
               type, s));
          PUSHs(sv);
        }
#line 180 "Hdf5.c"
	PUTBACK;
	return;
    }
}


/* INCLUDE: Returning to 'Hdf5.xs' from 'const-xs.inc' */


XS(XS_Hdf5_get_H5T_STD_I16LE); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_get_H5T_STD_I16LE)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	hid_t	RETVAL;
	dXSTARG;
#line 20 "Hdf5.xs"
	RETVAL = H5T_STD_I16LE_g;
#line 205 "Hdf5.c"
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_get_H5T_STD_I32LE); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_get_H5T_STD_I32LE)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	hid_t	RETVAL;
	dXSTARG;
#line 27 "Hdf5.xs"
	RETVAL = H5T_STD_I32LE_g;
#line 227 "Hdf5.c"
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_get_H5T_NATIVE_INT); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_get_H5T_NATIVE_INT)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	hid_t	RETVAL;
	dXSTARG;
#line 36 "Hdf5.xs"
	RETVAL = H5T_NATIVE_INT_g;
#line 249 "Hdf5.c"
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_get_H5T_NATIVE_FLOAT); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_get_H5T_NATIVE_FLOAT)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	hid_t	RETVAL;
	dXSTARG;
#line 43 "Hdf5.xs"
	RETVAL = H5T_NATIVE_FLOAT_g;
#line 271 "Hdf5.c"
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_get_H5T_NATIVE_DOUBLE); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_get_H5T_NATIVE_DOUBLE)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 0)
       croak_xs_usage(cv,  "");
    {
	hid_t	RETVAL;
	dXSTARG;
#line 50 "Hdf5.xs"
	RETVAL = H5T_NATIVE_DOUBLE_g;
#line 293 "Hdf5.c"
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Fopen); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Fopen)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "name, flags, access_id");
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	unsigned int	flags = (unsigned int)SvUV(ST(1));
	hid_t	access_id = (hid_t)SvUV(ST(2));
	hid_t	RETVAL;
	dXSTARG;

	RETVAL = H5Fopen(name, flags, access_id);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Fcreate); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Fcreate)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 4)
       croak_xs_usage(cv,  "name, flags, create_id, access_id");
    {
	const char *	name = (const char *)SvPV_nolen(ST(0));
	unsigned int	flags = (unsigned int)SvUV(ST(1));
	hid_t	create_id = (hid_t)SvUV(ST(2));
	hid_t	access_id = (hid_t)SvUV(ST(3));
	hid_t	RETVAL;
	dXSTARG;

	RETVAL = H5Fcreate(name, flags, create_id, access_id);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Dopen2); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Dopen2)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "loc_id, name, dapl_id");
    {
	hid_t	loc_id = (hid_t)SvUV(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	hid_t	dapl_id = (hid_t)SvUV(ST(2));
	hid_t	RETVAL;
	dXSTARG;

	RETVAL = H5Dopen2(loc_id, name, dapl_id);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Dget_type); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Dget_type)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "dataset");
    {
	hid_t	dataset = (hid_t)SvUV(ST(0));
	hid_t	RETVAL;
	dXSTARG;

	RETVAL = H5Dget_type(dataset);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Tget_class); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Tget_class)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "dtype_id");
    {
	hid_t	dtype_id = (hid_t)SvUV(ST(0));
	H5T_class_t	RETVAL;
	dXSTARG;

	RETVAL = H5Tget_class(dtype_id);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Tget_order); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Tget_order)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "dtype_id");
    {
	hid_t	dtype_id = (hid_t)SvUV(ST(0));
	H5T_order_t	RETVAL;
	dXSTARG;

	RETVAL = H5Tget_order(dtype_id);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Tget_size); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Tget_size)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "dtype_id");
    {
	hid_t	dtype_id = (hid_t)SvUV(ST(0));
	size_t	RETVAL;
	dXSTARG;

	RETVAL = H5Tget_size(dtype_id);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Dget_space); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Dget_space)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "dataset_id");
    {
	hid_t	dataset_id = (hid_t)SvUV(ST(0));
	hid_t	RETVAL;
	dXSTARG;

	RETVAL = H5Dget_space(dataset_id);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Sget_simple_extent_ndims); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Sget_simple_extent_ndims)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "space_id");
    {
	hid_t	space_id = (hid_t)SvUV(ST(0));
	int	RETVAL;
	dXSTARG;

	RETVAL = H5Sget_simple_extent_ndims(space_id);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Sget_simple_extent_dims); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Sget_simple_extent_dims)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "space_id, dims, maxdims");
    {
	hid_t	space_id = (hid_t)SvUV(ST(0));
	AV *	dims;
	AV *	maxdims;
	int	RETVAL;
	dXSTARG;

	STMT_START {
		SV* const xsub_tmp_sv = ST(1);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    dims = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Sget_simple_extent_dims",
				"dims");
		}
	} STMT_END;

	STMT_START {
		SV* const xsub_tmp_sv = ST(2);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    maxdims = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Sget_simple_extent_dims",
				"maxdims");
		}
	} STMT_END;
#line 103 "Hdf5.xs"
	hsize_t *cdims    = malloc((av_len(dims)+1)   *sizeof(hsize_t));
	hsize_t *cmaxdims = malloc((av_len(maxdims)+1)*sizeof(hsize_t));
	RETVAL = H5Sget_simple_extent_dims(space_id,cdims,cmaxdims);
	int i=0;
	for(i=0;i<=av_len(dims);i++) { 
		av_store(dims,i,newSVnv(cdims[i]));
		av_store(maxdims,i,newSVnv(cmaxdims[i]));
	}
	free(cdims);
	free(cmaxdims);
#line 558 "Hdf5.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Screate_simple); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Screate_simple)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "rank, current_dims, maximum_dims");
    {
	int	rank = (int)SvIV(ST(0));
	hsize_t *	current_dims = ST(1);
	hsize_t *	maximum_dims = ST(2);
	hid_t	RETVAL;
	dXSTARG;

	RETVAL = H5Screate_simple(rank, current_dims, maximum_dims);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Screate_simpleNULL); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Screate_simpleNULL)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "rank, current_dims");
    {
	int	rank = (int)SvIV(ST(0));
	AV *	current_dims;
	hid_t	RETVAL;
	dXSTARG;

	STMT_START {
		SV* const xsub_tmp_sv = ST(1);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    current_dims = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Screate_simpleNULL",
				"current_dims");
		}
	} STMT_END;
#line 127 "Hdf5.xs"
	int i=0;
	hsize_t d[100];
	for(i=0;i<rank;i++) {
		SV** e = av_fetch(current_dims,i,0);
		d[i] = SvNV(*e);
	}
	RETVAL = H5Screate_simple(rank,d,NULL);
#line 625 "Hdf5.c"
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Tclose); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Tclose)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "datatype");
    {
	hid_t	datatype = (hid_t)SvUV(ST(0));
	herr_t	RETVAL;
	dXSTARG;

	RETVAL = H5Tclose(datatype);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Dclose); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Dclose)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "dataset");
    {
	hid_t	dataset = (hid_t)SvUV(ST(0));
	herr_t	RETVAL;
	dXSTARG;

	RETVAL = H5Dclose(dataset);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Sclose); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Sclose)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "dataspace");
    {
	hid_t	dataspace = (hid_t)SvUV(ST(0));
	herr_t	RETVAL;
	dXSTARG;

	RETVAL = H5Sclose(dataspace);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Fclose); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Fclose)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "file");
    {
	hid_t	file = (hid_t)SvUV(ST(0));
	herr_t	RETVAL;
	dXSTARG;

	RETVAL = H5Fclose(file);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Aclose); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Aclose)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "attr");
    {
	hid_t	attr = (hid_t)SvUV(ST(0));
	herr_t	RETVAL;
	dXSTARG;

	RETVAL = H5Aclose(attr);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Gclose); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Gclose)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "group");
    {
	hid_t	group = (hid_t)SvUV(ST(0));
	herr_t	RETVAL;
	dXSTARG;

	RETVAL = H5Gclose(group);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Tcopy); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Tcopy)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "type_id");
    {
	hid_t	type_id = (hid_t)SvUV(ST(0));
	hid_t	RETVAL;
	dXSTARG;

	RETVAL = H5Tcopy(type_id);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Tset_order); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Tset_order)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "type_id, order");
    {
	hid_t	type_id = (hid_t)SvUV(ST(0));
	H5T_order_t	order = (int)SvIV(ST(1));
	herr_t	RETVAL;
	dXSTARG;

	RETVAL = H5Tset_order(type_id, order);
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Dcreate2); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Dcreate2)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 7)
       croak_xs_usage(cv,  "loc_id, name, dtype_id, space_id, lcpl_id, dcpl_id, dapl_id");
    {
	hid_t	loc_id = (hid_t)SvUV(ST(0));
	char *	name = (char *)SvPV_nolen(ST(1));
	hid_t	dtype_id = (hid_t)SvUV(ST(2));
	hid_t	space_id = (hid_t)SvUV(ST(3));
	hid_t	lcpl_id = (hid_t)SvUV(ST(4));
	hid_t	dcpl_id = (hid_t)SvUV(ST(5));
	hid_t	dapl_id = (hid_t)SvUV(ST(6));
	hid_t	RETVAL;
	dXSTARG;

	RETVAL = H5Dcreate2(loc_id, name, dtype_id, space_id, lcpl_id, dcpl_id, dapl_id);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Dwrite); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Dwrite)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 6)
       croak_xs_usage(cv,  "dataset_id, mem_type_id, mem_space_id, file_space_id, xfer_plist_id, buf");
    {
	hid_t	dataset_id = (hid_t)SvUV(ST(0));
	hid_t	mem_type_id = (hid_t)SvUV(ST(1));
	hid_t	mem_space_id = (hid_t)SvUV(ST(2));
	hid_t	file_space_id = (hid_t)SvUV(ST(3));
	hid_t	xfer_plist_id = (hid_t)SvUV(ST(4));
	AV *	buf;
	herr_t	RETVAL;
	dXSTARG;

	STMT_START {
		SV* const xsub_tmp_sv = ST(5);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    buf = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Dwrite",
				"buf");
		}
	} STMT_END;
#line 190 "Hdf5.xs"
	int i=0;
	unsigned long buffer[100];
	for(i=0;i<=av_len(buf);i++) {
		SV** e = av_fetch(buf,i,0);
		buffer[i] = SvNV(*e);
	}
	RETVAL = H5Dwrite(dataset_id,mem_type_id,mem_space_id,file_space_id,xfer_plist_id,buffer);
#line 877 "Hdf5.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Dread32); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Dread32)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 6)
       croak_xs_usage(cv,  "dataset_id, mem_type_id, mem_space_id, file_space_id, xfer_plist_id, buf");
    {
	hid_t	dataset_id = (hid_t)SvUV(ST(0));
	hid_t	mem_type_id = (hid_t)SvUV(ST(1));
	hid_t	mem_space_id = (hid_t)SvUV(ST(2));
	hid_t	file_space_id = (hid_t)SvUV(ST(3));
	hid_t	xfer_plist_id = (hid_t)SvUV(ST(4));
	AV *	buf;
	herr_t	RETVAL;
	dXSTARG;

	STMT_START {
		SV* const xsub_tmp_sv = ST(5);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    buf = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Dread32",
				"buf");
		}
	} STMT_END;
#line 209 "Hdf5.xs"
	int32_t *data = malloc(av_len(buf)*sizeof(int32_t));
	RETVAL = H5Dread(dataset_id,mem_type_id,mem_space_id,file_space_id,xfer_plist_id,data);
	int i=0;
	for(i=0;i<=av_len(buf);i++) { 
		av_store(buf,i,newSVnv(data[i]));
	}
	free(data);
#line 924 "Hdf5.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Dread16); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Dread16)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 6)
       croak_xs_usage(cv,  "dataset_id, mem_type_id, mem_space_id, file_space_id, xfer_plist_id, buf");
    {
	hid_t	dataset_id = (hid_t)SvUV(ST(0));
	hid_t	mem_type_id = (hid_t)SvUV(ST(1));
	hid_t	mem_space_id = (hid_t)SvUV(ST(2));
	hid_t	file_space_id = (hid_t)SvUV(ST(3));
	hid_t	xfer_plist_id = (hid_t)SvUV(ST(4));
	AV *	buf;
	herr_t	RETVAL;
	dXSTARG;

	STMT_START {
		SV* const xsub_tmp_sv = ST(5);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    buf = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Dread16",
				"buf");
		}
	} STMT_END;
#line 228 "Hdf5.xs"
	int16_t *data = malloc(av_len(buf)*sizeof(int16_t));
	RETVAL = H5Dread(dataset_id,mem_type_id,mem_space_id,file_space_id,xfer_plist_id,data);
	int i=0;
	for(i=0;i<=av_len(buf);i++) { 
		av_store(buf,i,newSVnv(data[i]));
	}
	free(data);
#line 971 "Hdf5.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Sselect_hyperslab); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Sselect_hyperslab)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 6)
       croak_xs_usage(cv,  "space_id, op, start, stride, count, block");
    {
	hid_t	space_id = (hid_t)SvUV(ST(0));
	H5S_seloper_t	op = (int)SvIV(ST(1));
	AV *	start;
	AV *	stride;
	AV *	count;
	AV *	block;
	herr_t	RETVAL;
	dXSTARG;

	STMT_START {
		SV* const xsub_tmp_sv = ST(2);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    start = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Sselect_hyperslab",
				"start");
		}
	} STMT_END;

	STMT_START {
		SV* const xsub_tmp_sv = ST(3);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    stride = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Sselect_hyperslab",
				"stride");
		}
	} STMT_END;

	STMT_START {
		SV* const xsub_tmp_sv = ST(4);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    count = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Sselect_hyperslab",
				"count");
		}
	} STMT_END;

	STMT_START {
		SV* const xsub_tmp_sv = ST(5);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    block = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Sselect_hyperslab",
				"block");
		}
	} STMT_END;
#line 247 "Hdf5.xs"
	hsize_t *hstart  = malloc(sizeof(hsize_t)*av_len(start)); 
	hsize_t *hstride = malloc(sizeof(hsize_t)*av_len(stride));
	hsize_t *hcount  = malloc(sizeof(hsize_t)*av_len(count));
	hsize_t *hblock  = malloc(sizeof(hsize_t)*av_len(block));

	int n;
	for(n=0;n<=av_len(start);n++) {
		SV** a = av_fetch(start,n,0);
		hstart[n] = SvNV(*a);
	}

	for(n=0;n<=av_len(stride);n++) {
		SV** b = av_fetch(stride,n,0);
		hstride[n] = SvNV(*b);
	}

	for(n=0;n<=av_len(count);n++) {
		SV** c = av_fetch(count,n,0);
		hcount[n] = SvNV(*c);
	}

	for(n=0;n<=av_len(block);n++) {
		SV** d = av_fetch(block,n,0);
		hblock[n] = SvNV(*d);
	}

	RETVAL = H5Sselect_hyperslab(space_id,op,hstart,hstride,hcount,hblock);
	free(hstart);
	free(hstride);
	free(hcount);
	free(hblock);
#line 1081 "Hdf5.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Aopen_name); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Aopen_name)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "loc_id, name");
    {
	hid_t	loc_id = (hid_t)SvUV(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	hid_t	RETVAL;
	dXSTARG;

	RETVAL = H5Aopen_name(loc_id, name);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Aread64f); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Aread64f)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       croak_xs_usage(cv,  "attr_id, mem_type_id, buf");
    {
	hid_t	attr_id = (hid_t)SvUV(ST(0));
	hid_t	mem_type_id = (hid_t)SvUV(ST(1));
	AV *	buf;
	herr_t	RETVAL;
	dXSTARG;

	STMT_START {
		SV* const xsub_tmp_sv = ST(2);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    buf = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Aread64f",
				"buf");
		}
	} STMT_END;
#line 292 "Hdf5.xs"
	double *data = malloc((av_len(buf)+1)*sizeof(double));
	RETVAL = H5Aread(attr_id,mem_type_id,data);
	int i=0;
	for(i=0;i<=av_len(buf);i++) { 
		av_store(buf,i,newSVnv(data[i]));
	}
	free(data);
#line 1148 "Hdf5.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Gopen1); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Gopen1)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "loc_id, name");
    {
	hid_t	loc_id = (hid_t)SvUV(ST(0));
	const char *	name = (const char *)SvPV_nolen(ST(1));
	hid_t	RETVAL;
	dXSTARG;

	RETVAL = H5Gopen1(loc_id, name);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Hdf5_H5Gget_num_objs); /* prototype to pass -Wmissing-prototypes */
XS(XS_Hdf5_H5Gget_num_objs)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "loc_id, num_obj");
    {
	hid_t	loc_id = (hid_t)SvUV(ST(0));
	AV *	num_obj;
	herr_t	RETVAL;
	dXSTARG;

	STMT_START {
		SV* const xsub_tmp_sv = ST(1);
		SvGETMAGIC(xsub_tmp_sv);
		if (SvROK(xsub_tmp_sv) && SvTYPE(SvRV(xsub_tmp_sv)) == SVt_PVAV){
		    num_obj = (AV*)SvRV(xsub_tmp_sv);
		}
		else{
		    Perl_croak(aTHX_ "%s: %s is not an ARRAY reference",
				"Hdf5::H5Gget_num_objs",
				"num_obj");
		}
	} STMT_END;
#line 312 "Hdf5.xs"
	hsize_t cnum_obj;
	RETVAL = H5Gget_num_objs(loc_id,&cnum_obj);
	av_store(num_obj,0,newSVnv(cnum_obj));
#line 1210 "Hdf5.c"
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Hdf5); /* prototype to pass -Wmissing-prototypes */
XS(boot_Hdf5)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
#if (PERL_REVISION == 5 && PERL_VERSION < 9)
    char* file = __FILE__;
#else
    const char* file = __FILE__;
#endif

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
#ifdef XS_APIVERSION_BOOTCHECK
    XS_APIVERSION_BOOTCHECK;
#endif
    XS_VERSION_BOOTCHECK ;

        newXS("Hdf5::constant", XS_Hdf5_constant, file);
        newXS("Hdf5::get_H5T_STD_I16LE", XS_Hdf5_get_H5T_STD_I16LE, file);
        newXS("Hdf5::get_H5T_STD_I32LE", XS_Hdf5_get_H5T_STD_I32LE, file);
        newXS("Hdf5::get_H5T_NATIVE_INT", XS_Hdf5_get_H5T_NATIVE_INT, file);
        newXS("Hdf5::get_H5T_NATIVE_FLOAT", XS_Hdf5_get_H5T_NATIVE_FLOAT, file);
        newXS("Hdf5::get_H5T_NATIVE_DOUBLE", XS_Hdf5_get_H5T_NATIVE_DOUBLE, file);
        newXS("Hdf5::H5Fopen", XS_Hdf5_H5Fopen, file);
        newXS("Hdf5::H5Fcreate", XS_Hdf5_H5Fcreate, file);
        newXS("Hdf5::H5Dopen2", XS_Hdf5_H5Dopen2, file);
        newXS("Hdf5::H5Dget_type", XS_Hdf5_H5Dget_type, file);
        newXS("Hdf5::H5Tget_class", XS_Hdf5_H5Tget_class, file);
        newXS("Hdf5::H5Tget_order", XS_Hdf5_H5Tget_order, file);
        newXS("Hdf5::H5Tget_size", XS_Hdf5_H5Tget_size, file);
        newXS("Hdf5::H5Dget_space", XS_Hdf5_H5Dget_space, file);
        newXS("Hdf5::H5Sget_simple_extent_ndims", XS_Hdf5_H5Sget_simple_extent_ndims, file);
        newXS("Hdf5::H5Sget_simple_extent_dims", XS_Hdf5_H5Sget_simple_extent_dims, file);
        newXS("Hdf5::H5Screate_simple", XS_Hdf5_H5Screate_simple, file);
        newXS("Hdf5::H5Screate_simpleNULL", XS_Hdf5_H5Screate_simpleNULL, file);
        newXS("Hdf5::H5Tclose", XS_Hdf5_H5Tclose, file);
        newXS("Hdf5::H5Dclose", XS_Hdf5_H5Dclose, file);
        newXS("Hdf5::H5Sclose", XS_Hdf5_H5Sclose, file);
        newXS("Hdf5::H5Fclose", XS_Hdf5_H5Fclose, file);
        newXS("Hdf5::H5Aclose", XS_Hdf5_H5Aclose, file);
        newXS("Hdf5::H5Gclose", XS_Hdf5_H5Gclose, file);
        newXS("Hdf5::H5Tcopy", XS_Hdf5_H5Tcopy, file);
        newXS("Hdf5::H5Tset_order", XS_Hdf5_H5Tset_order, file);
        newXS("Hdf5::H5Dcreate2", XS_Hdf5_H5Dcreate2, file);
        newXS("Hdf5::H5Dwrite", XS_Hdf5_H5Dwrite, file);
        newXS("Hdf5::H5Dread32", XS_Hdf5_H5Dread32, file);
        newXS("Hdf5::H5Dread16", XS_Hdf5_H5Dread16, file);
        newXS("Hdf5::H5Sselect_hyperslab", XS_Hdf5_H5Sselect_hyperslab, file);
        newXS("Hdf5::H5Aopen_name", XS_Hdf5_H5Aopen_name, file);
        newXS("Hdf5::H5Aread64f", XS_Hdf5_H5Aread64f, file);
        newXS("Hdf5::H5Gopen1", XS_Hdf5_H5Gopen1, file);
        newXS("Hdf5::H5Gget_num_objs", XS_Hdf5_H5Gget_num_objs, file);
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

