#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RainDropTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RainDropTools"));
	}

	template <typename T = Il2CppString*> static T& SHADER_FORWARD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_CHEAP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& SHADER_NO_DISTORTION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShaderName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRainMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyRainMaterialValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateQuadMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateHiddenObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Random() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Random() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyChildrenImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraOrthographicSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpawnLocalPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGForcedScreenMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeightedElement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = Il2CppString*> static T GetShaderName(uintptr_t shaderType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37E6FC0))(0, shaderType);
	}
	template <typename T = uintptr_t> static T CreateRainMaterial(uintptr_t shaderType, int32_t renderQueue) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x37E698C))(0, shaderType, renderQueue);
	}
	template <typename T = void> static T ApplyRainMaterialValue(uintptr_t material, uintptr_t shaderType, uintptr_t normalMap, uintptr_t overlayTexture, float distortionValue, void* overlayColor, float reliefValue, float blur, float darkness) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, void*, float, float, float))(Il2CppBase() + 0x37E71B0))(0, material, shaderType, normalMap, overlayTexture, distortionValue, overlayColor, reliefValue, blur, darkness);
	}
	template <typename T = uintptr_t> static T CreateQuadMesh() {
		return ((T (*)(void *))(Il2CppBase() + 0x37E6B30))(0);
	}
	template <typename T = uintptr_t> static T CreateHiddenObject(Il2CppString* name, uintptr_t parent) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x37E775C))(0, name, parent);
	}
	template <typename T = float> static T Random(float min, float max) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x37E7994))(0, min, max);
	}
	template <typename T = int32_t> static T Random_1(int32_t min, int32_t max) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x37E7A7C))(0, min, max);
	}
	template <typename T = void> static T DestroyChildren(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37E7B64))(0, t);
	}
	template <typename T = void> static T DestroyChildrenImmediate(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37E7EE8))(0, t);
	}
	template <typename T = Il2CppVector2> static T GetCameraOrthographicSize(uintptr_t cam) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37E826C))(0, cam);
	}
	template <typename T = Il2CppVector3> static T GetSpawnLocalPos(uintptr_t parent, uintptr_t cam, float offsetX, float offsetY) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x37E83A8))(0, parent, cam, offsetX, offsetY);
	}
	template <typename T = Il2CppVector3> static T GetGForcedScreenMovement(uintptr_t screenTransform, Il2CppVector3 GForce) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x37E8650))(0, screenTransform, GForce);
	}
	template <typename T = void*> static T GetWeightedElement(Il2CppList<void*>* list) {
		return ((T (*)(void *, Il2CppList<void*>*))(Il2CppBase() + 0x21D15C0))(0, list);
	}
	template <typename T = double> static T GetWeightedElement_2m__0(void* t) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x21DDAEC))(0, t);
	}

};

}
