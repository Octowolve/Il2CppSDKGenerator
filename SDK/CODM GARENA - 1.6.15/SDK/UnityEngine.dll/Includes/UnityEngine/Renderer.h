#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Renderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Renderer"));
	}


	template <typename T = bool> static T SetRenderStateBlock(int32_t blockID, uintptr_t block) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4ACFCB4))(0, blockID, block);
	}
	template <typename T = void> T ClearRenderState() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4ACFD88))(this);
	}
	template <typename T = bool> T SetRenderState(int32_t passType, int32_t state) {
		return ((T (*)(Renderer*, int32_t, int32_t))(Il2CppBase() + 0x4ACFE20))(this, passType, state);
	}
	template <typename T = void> T EnableKeyword(Il2CppString* keyword) {
		return ((T (*)(Renderer*, Il2CppString*))(Il2CppBase() + 0x4ACFEC8))(this, keyword);
	}
	template <typename T = void> T DisableKeyword(Il2CppString* keyword) {
		return ((T (*)(Renderer*, Il2CppString*))(Il2CppBase() + 0x4ACFF68))(this, keyword);
	}
	template <typename T = void> T set_overrideRenderQueue(int32_t value) {
		return ((T (*)(Renderer*, int32_t))(Il2CppBase() + 0x4AD0008))(this, value);
	}
	template <typename T = bool> T get_isPartOfStaticBatch() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD00A8))(this);
	}
	template <typename T = bool> T get_enabled() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD0140))(this);
	}
	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(Renderer*, bool))(Il2CppBase() + 0x4AD01D8))(this, value);
	}
	template <typename T = uintptr_t> T get_shadowCastingMode() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD0278))(this);
	}
	template <typename T = void> T set_shadowCastingMode(uintptr_t value) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD0310))(this, value);
	}
	template <typename T = bool> T get_receiveShadows() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD03B0))(this);
	}
	template <typename T = void> T set_receiveShadows(bool value) {
		return ((T (*)(Renderer*, bool))(Il2CppBase() + 0x4AD0448))(this, value);
	}
	template <typename T = bool> T get_receiveNoSSShadows() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD04E8))(this);
	}
	template <typename T = void> T set_receiveNoSSShadows(bool value) {
		return ((T (*)(Renderer*, bool))(Il2CppBase() + 0x4AD0580))(this, value);
	}
	template <typename T = bool> T get_dynamicShadows() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD0620))(this);
	}
	template <typename T = void> T set_dynamicShadows(bool value) {
		return ((T (*)(Renderer*, bool))(Il2CppBase() + 0x4AD06B8))(this, value);
	}
	template <typename T = uint32_t> T get_passTypeMask() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD0758))(this);
	}
	template <typename T = void> T set_passTypeMask(uint32_t value) {
		return ((T (*)(Renderer*, uint32_t))(Il2CppBase() + 0x4AD07F0))(this, value);
	}
	template <typename T = void> T set_resideInMemory(bool value) {
		return ((T (*)(Renderer*, bool))(Il2CppBase() + 0x4AD0890))(this, value);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD0930))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD09C8))(this, value);
	}
	template <typename T = uintptr_t> T get_sharedMaterial() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD0A68))(this);
	}
	template <typename T = void> T set_sharedMaterial(uintptr_t value) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD0B00))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_materials() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD0BA0))(this);
	}
	template <typename T = void> T set_materials(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Renderer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AD0C38))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_sharedMaterials() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD0CD8))(this);
	}
	template <typename T = void> T set_sharedMaterials(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Renderer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AD0D70))(this, value);
	}
	template <typename T = uintptr_t> T get_bounds() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD0E10))(this);
	}
	template <typename T = void> T INTERNAL_get_bounds(uintptr_t* value) {
		return ((T (*)(Renderer*, uintptr_t*))(Il2CppBase() + 0x4AD0E5C))(this, value);
	}
	template <typename T = int32_t> T get_lightmapIndex() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD0EFC))(this);
	}
	template <typename T = void> T set_lightmapIndex(int32_t value) {
		return ((T (*)(Renderer*, int32_t))(Il2CppBase() + 0x4AD0F94))(this, value);
	}
	template <typename T = void> T set_lightmapScaleOffset(uintptr_t value) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD1034))(this, value);
	}
	template <typename T = void> T INTERNAL_set_lightmapScaleOffset(uintptr_t value) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD1058))(this, value);
	}
	template <typename T = bool> T get_isVisible() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD10F8))(this);
	}
	template <typename T = void> T set_lightProbeUsage(uintptr_t value) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD1190))(this, value);
	}
	template <typename T = void> T set_lightProbeProxyVolumeOverride(uintptr_t value) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD1230))(this, value);
	}
	template <typename T = uintptr_t> T get_probeAnchor() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD12D0))(this);
	}
	template <typename T = void> T set_probeAnchor(uintptr_t value) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD1368))(this, value);
	}
	template <typename T = void> T set_reflectionProbeUsage(uintptr_t value) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD1408))(this, value);
	}
	template <typename T = void> T SetPropertyBlock(uintptr_t properties) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD14A8))(this, properties);
	}
	template <typename T = void> T GetPropertyBlock(uintptr_t dest) {
		return ((T (*)(Renderer*, uintptr_t))(Il2CppBase() + 0x4AD1548))(this, dest);
	}
	template <typename T = Il2CppString*> T get_sortingLayerName() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD15E8))(this);
	}
	template <typename T = void> T set_sortingLayerName(Il2CppString* value) {
		return ((T (*)(Renderer*, Il2CppString*))(Il2CppBase() + 0x4AD1680))(this, value);
	}
	template <typename T = int32_t> T get_sortingLayerID() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD1720))(this);
	}
	template <typename T = int32_t> T get_sortingOrder() {
		return ((T (*)(Renderer*))(Il2CppBase() + 0x4AD17B8))(this);
	}
	template <typename T = void> T set_sortingOrder(int32_t value) {
		return ((T (*)(Renderer*, int32_t))(Il2CppBase() + 0x4AD1850))(this, value);
	}

};

}
