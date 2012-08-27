!Category(fhgHam213)
!-----------------------------------------------------------------------
! fhgHam213.inc - Include for the Ham213 application
!-----------------------------------------------------------------------
  OMIT('_EndOfInclude', _fhgHam213Present_)
_fhgHam213Present_ EQUATE(1)
  INCLUDE('fhgEagleFlintSoftware.inc'), ONCE
!-----------------------------------
! Main application settings
!-----------------------------------
app:Version         EQUATE('1.01.005')          !! Version resource
app:Website         EQUATE('http://blog.eagleflint.com/category/amateur-radio/digital/ham213/') !! Development thread
app:Author          EQUATE('Flint Gatrell, N<216>FHG') !! Application author
app:Copyright       EQUATE('<169> 2011-2012 Flint Gatrell.<13,10>Portions copyrighted by Twenty Pines Resources, Inc., www.20pines.com') !! Copyright notice
app:License         EQUATE('This app is free for Amateur use.') !! License notice

!-----------------------------------
! Product options
!-----------------------------------

_EndOfInclude_