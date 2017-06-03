// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2002-2004 - INRIA - Vincent COUVERT
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2.1-en.txt

function [tree]=sci_drawnow(tree)
    // M2SCI function
    // Conversion function for Matlab drawnow()
    // Input: tree = Matlab funcall tree
    // Ouput: tree = Scilab equivalent for tree

    set_infos(gettext("Drawing events are not queued in Scilab."),0);
    tree=Funcall("%comment",1,list(Cste(tree.name)),list())
endfunction