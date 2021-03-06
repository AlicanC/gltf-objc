//
//  Copyright (c) 2017 Warren Moore. All rights reserved.
//
//  Permission to use, copy, modify, and distribute this software for any
//  purpose with or without fee is hereby granted, provided that the above
//  copyright notice and this permission notice appear in all copies.
//
//  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
//  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
//  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
//  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
//  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
//  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
//  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//

#import "GLTFObject.h"

@import simd;

@class GLTFParameter, GLTFTexture;

typedef NS_ENUM(NSInteger, GLTFAlphaMode) {
    GLTFAlphaModeOpaque,
    GLTFAlphaModeMask,
    GLTFAlphaModeBlend,
};

@interface GLTFMaterial : GLTFObject

@property (nonatomic, assign) vector_float4 baseColorFactor;
@property (nonatomic, assign) float metalnessFactor;
@property (nonatomic, assign) float roughnessFactor;
@property (nonatomic, assign) float normalTextureScale;
@property (nonatomic, assign) vector_float3 emissiveFactor;

@property (nonatomic, strong) GLTFTexture *baseColorTexture;
@property (nonatomic, strong) GLTFTexture *metallicRoughnessTexture;
@property (nonatomic, strong) GLTFTexture *normalTexture;
@property (nonatomic, strong) GLTFTexture *emissiveTexture;
@property (nonatomic, strong) GLTFTexture *occlusionTexture;

@property (nonatomic, assign, getter=isDoubleSided) BOOL doubleSided;

@property (nonatomic, assign) GLTFAlphaMode alphaMode;
@property (nonatomic, assign) float alphaCutoff; // Only used when `alphaMode` == GLTFAlphaModeMask

@end

