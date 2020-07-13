#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GlowSystem {

class GlowEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GlowSystem", "GlowEffect"));
	}

	template <typename T = uintptr_t> static T& colorClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& commandBufferName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& identityMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> T& queue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& cameraTargetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& quad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& device() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = float> T& depthOffsetFactor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& depthOffsetUnits() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& commandBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& cachedWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& cachedHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& cachedAA() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _downsampleFactor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _blurIterations() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& _blurMinSpread() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _blurSpread() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& _blurIntensity() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _glowEdgeWidth() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& glowBufferID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& glowBuffer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& cam() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isDepthAvailable() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> static T& blurShaderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = Il2CppString*> static T& cutShaderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = Il2CppString*> static T& compositeShaderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& blurShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& cutShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& compositeShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& blurMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& cutMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& compMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = Il2CppString*> static T& laplaceFilterShaderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = Il2CppString*> static T& sobelFilterShaderPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& edgeDetectionShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& edgeDetectionMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = bool> T& useEdgeDetection() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = bool> T& initialized() {
		return *(T*)((uintptr_t)this + 0x56);
	}
	template <typename T = bool> T& hasBeenStarted() {
		return *(T*)((uintptr_t)this + 0x57);
	}
	template <typename T = void*> static T& cameras() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = bool> T& m_OldUseOcclusionCulling() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGlowCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateQuad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSupported() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RebuildCommandBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = bool> static T get_uvStartsAtTop() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E173EC))(0);
	}
	template <typename T = int32_t> T get_downsampleFactor() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E175B0))(this);
	}
	template <typename T = void> T set_downsampleFactor(int32_t value) {
		return ((T (*)(GlowEffect*, int32_t))(Il2CppBase() + 0x3E175B8))(this, value);
	}
	template <typename T = int32_t> T get_blurIterations() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E176A4))(this);
	}
	template <typename T = void> T set_blurIterations(int32_t value) {
		return ((T (*)(GlowEffect*, int32_t))(Il2CppBase() + 0x3E176AC))(this, value);
	}
	template <typename T = float> T get_blurMinSpread() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E176BC))(this);
	}
	template <typename T = void> T set_blurMinSpread(float value) {
		return ((T (*)(GlowEffect*, float))(Il2CppBase() + 0x3E176C4))(this, value);
	}
	template <typename T = float> T get_blurSpread() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E176DC))(this);
	}
	template <typename T = void> T set_blurSpread(float value) {
		return ((T (*)(GlowEffect*, float))(Il2CppBase() + 0x3E176E4))(this, value);
	}
	template <typename T = float> T get_blurIntensity() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E176FC))(this);
	}
	template <typename T = void> T set_blurIntensity(float value) {
		return ((T (*)(GlowEffect*, float))(Il2CppBase() + 0x3E17704))(this, value);
	}
	template <typename T = Il2CppString*> static T get_edgeDetectionShaderPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E17908))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E179B8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E17AA0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E17B8C))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E17C6C))(this);
	}
	template <typename T = void> T UnInitialize() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E17F6C))(this);
	}
	template <typename T = void> T OnPreRender() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E18264))(this);
	}
	template <typename T = bool> static T IsGlowCamera(uintptr_t cam) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E18ADC))(0, cam);
	}
	template <typename T = void> static T InitializeMaterials(bool edgeDetection) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3E18C1C))(0, edgeDetection);
	}
	template <typename T = void> static T CreateQuad() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E19428))(0);
	}
	template <typename T = int32_t> T GetAA() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E19BF0))(this);
	}
	template <typename T = bool> T CheckSupported(bool verbose) {
		return ((T (*)(GlowEffect*, bool))(Il2CppBase() + 0x3E19D24))(this, verbose);
	}
	template <typename T = void> T RebuildCommandBuffer() {
		return ((T (*)(GlowEffect*))(Il2CppBase() + 0x3E1A22C))(this);
	}

};

}
