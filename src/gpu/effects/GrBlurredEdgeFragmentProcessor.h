/*
 * Copyright 2017 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/*
 * This file was autogenerated from GrBlurredEdgeFragmentProcessor.fp; do not modify.
 */
#ifndef GrBlurredEdgeFragmentProcessor_DEFINED
#define GrBlurredEdgeFragmentProcessor_DEFINED
#include "SkTypes.h"
#if SK_SUPPORT_GPU
#include "GrFragmentProcessor.h"
#include "GrCoordTransform.h"
class GrBlurredEdgeFragmentProcessor : public GrFragmentProcessor {
public:
    enum Mode { kGaussian_Mode = 0, kSmoothStep_Mode = 1 };
    int mode() const { return fMode; }
    static std::unique_ptr<GrFragmentProcessor> Make(int mode) {
        return std::unique_ptr<GrFragmentProcessor>(new GrBlurredEdgeFragmentProcessor(mode));
    }
    GrBlurredEdgeFragmentProcessor(const GrBlurredEdgeFragmentProcessor& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "BlurredEdgeFragmentProcessor"; }

private:
    GrBlurredEdgeFragmentProcessor(int mode)
            : INHERITED(kGrBlurredEdgeFragmentProcessor_ClassID, kNone_OptimizationFlags)
            , fMode(mode) {}
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    int fMode;
    typedef GrFragmentProcessor INHERITED;
};
#endif
#endif
