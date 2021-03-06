//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GLKShaderBlockNode, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface GLKEffect : NSObject
{
    NSMutableArray *_properties;
    unsigned char _colorMaterialEnabled;
    unsigned char _lightModelTwoSided;
    union _GLKVector4 _lightModelAmbientColor;
    unsigned char _texturingEnabled;
    NSArray *_textureOrder;
    NSString *_label;
    unsigned char _perVertexLightingEnabled;
    unsigned char _perPixelLightingEnabled;
    unsigned char _masksInitialized;
    _Bool _textureOrderStale;
    NSMutableDictionary *_programHash;
    unsigned int _numLights;
    unsigned int _numTextures;
    float *_materialAmbientColor;
    float *_materialDiffuseColor;
    int _aColorLoc;
    id *_effectShaderArray;
    NSMutableArray *_lightProperties;
    GLKShaderBlockNode *_vshRootNode;
    GLKShaderBlockNode *_fshRootNode;
    unsigned int _vshName;
    unsigned int _fshName;
    unsigned int _programName;
    char **_vshStrings;
    char **_fshStrings;
    unsigned int _numVshStrings;
    unsigned int _numFshStrings;
    int _lightModelAmbientColorLoc;
    int _baseLightingColorLoc;
    struct GLKBigInt_s *_fshMask;
    struct GLKBigInt_s *_vshMask;
    unsigned long long _dirtyUniforms;
    union _GLKVector4 _baseLightingColor;
    struct GLKBigInt_s _prevFshMask;
    struct GLKBigInt_s _prevVshMask;
}

+ (void)initialize;
+ (id)shaderInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (id)programInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (void)unrollLoopNodesForStaticTreeWithRoot:(id)arg1;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
+ (_Bool)parseXMLFile:(id)arg1 rootNode:(id)arg2;
+ (void)initializeStaticMasks;
@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)bind;
@property(nonatomic) struct GLKBigInt_s prevVshMask; // @synthesize prevVshMask=_prevVshMask;
@property(nonatomic) struct GLKBigInt_s prevFshMask; // @synthesize prevFshMask=_prevFshMask;
@property(nonatomic) struct GLKBigInt_s *vshMask; // @synthesize vshMask=_vshMask;
@property(nonatomic) struct GLKBigInt_s *fshMask; // @synthesize fshMask=_fshMask;
@property(nonatomic) int baseLightingColorLoc; // @synthesize baseLightingColorLoc=_baseLightingColorLoc;
@property(nonatomic) int lightModelAmbientColorLoc; // @synthesize lightModelAmbientColorLoc=_lightModelAmbientColorLoc;
@property(nonatomic) _Bool textureOrderStale; // @synthesize textureOrderStale=_textureOrderStale;
@property(nonatomic) unsigned int numFshStrings; // @synthesize numFshStrings=_numFshStrings;
@property(nonatomic) unsigned int numVshStrings; // @synthesize numVshStrings=_numVshStrings;
@property(nonatomic) char **fshStrings; // @synthesize fshStrings=_fshStrings;
@property(nonatomic) char **vshStrings; // @synthesize vshStrings=_vshStrings;
@property(nonatomic) unsigned int fshName; // @synthesize fshName=_fshName;
@property(nonatomic) unsigned int vshName; // @synthesize vshName=_vshName;
@property(readonly, nonatomic) GLKShaderBlockNode *fshRootNode; // @synthesize fshRootNode=_fshRootNode;
@property(readonly, nonatomic) GLKShaderBlockNode *vshRootNode; // @synthesize vshRootNode=_vshRootNode;
@property(retain, nonatomic) NSMutableArray *lightProperties; // @synthesize lightProperties=_lightProperties;
@property(nonatomic) id *effectShaderArray; // @synthesize effectShaderArray=_effectShaderArray;
@property(nonatomic) int aColorLoc; // @synthesize aColorLoc=_aColorLoc;
@property(nonatomic) unsigned char masksInitialized; // @synthesize masksInitialized=_masksInitialized;
@property(nonatomic) union _GLKVector4 baseLightingColor; // @synthesize baseLightingColor=_baseLightingColor;
@property(readonly, nonatomic) float *materialDiffuseColor; // @synthesize materialDiffuseColor=_materialDiffuseColor;
@property(readonly, nonatomic) float *materialAmbientColor; // @synthesize materialAmbientColor=_materialAmbientColor;
@property(nonatomic) unsigned char texturingEnabled; // @synthesize texturingEnabled=_texturingEnabled;
@property(nonatomic) unsigned int numTextures; // @synthesize numTextures=_numTextures;
@property(nonatomic) unsigned int numLights; // @synthesize numLights=_numLights;
@property(readonly, nonatomic) NSMutableDictionary *programHash; // @synthesize programHash=_programHash;
- (char **)fshMaskStr;
- (char **)vshMaskStr;
- (unsigned int)fshMaskCt;
- (unsigned int)vshMaskCt;
- (struct GLKBigInt_s *)fshMasks;
- (struct GLKBigInt_s *)vshMasks;
- (_Bool)includeShaderTextForRootNode:(id)arg1;
- (void)createAndUseProgramWithShadingHash:(id)arg1;
- (void)setTextureIndices;
- (BOOL)useColorAttrib;
- (BOOL)useTexCoordAttrib;
- (void)setShaderBindings;
- (void)initializeMasks;
- (void)updateFshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s)arg2;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (void)updateVshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s)arg2;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
@property(nonatomic) unsigned long long dirtyUniforms; // @synthesize dirtyUniforms=_dirtyUniforms;
- (void)addTransformProperty;
@property(nonatomic) unsigned char perVertexLightingEnabled; // @synthesize perVertexLightingEnabled=_perVertexLightingEnabled;
@property(nonatomic) unsigned char perPixelLightingEnabled; // @synthesize perPixelLightingEnabled=_perPixelLightingEnabled;
- (void)dirtyAllUniforms;
@property(nonatomic) unsigned int programName; // @synthesize programName=_programName;
@property(copy, nonatomic) NSArray *textureOrder; // @synthesize textureOrder=_textureOrder;
@property(nonatomic) union _GLKVector4 lightModelAmbientColor; // @synthesize lightModelAmbientColor=_lightModelAmbientColor;
@property(nonatomic) unsigned char lightModelTwoSided; // @synthesize lightModelTwoSided=_lightModelTwoSided;
@property(nonatomic) unsigned char colorMaterialEnabled; // @synthesize colorMaterialEnabled=_colorMaterialEnabled;
- (id)initWithPropertyArray:(id)arg1;

@end

