#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuntimeUtilities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuntimeUtilities"));
	}

	template <typename T = uintptr_t> static T& m_WhiteTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_BlackTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& m_TransparentTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& s_FullscreenTriangle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& s_CopyMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlitFullscreenTriangle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_BlitFullscreenTriangle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_BlitFullscreenTriangle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_BlitFullscreenTriangle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsResolvedDepthAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllSceneObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exp2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllAssemblyTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttribute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemberAttributes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFieldPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> static T get_whiteTexture() {
		return ((T (*)(void *))(Il2CppBase() + 0x4149E0C))(0);
	}
	template <typename T = uintptr_t> static T get_blackTexture() {
		return ((T (*)(void *))(Il2CppBase() + 0x4149FC8))(0);
	}
	template <typename T = uintptr_t> static T get_transparentTexture() {
		return ((T (*)(void *))(Il2CppBase() + 0x414A184))(0);
	}
	template <typename T = uintptr_t> static T get_fullscreenTriangle() {
		return ((T (*)(void *))(Il2CppBase() + 0x414A340))(0);
	}
	template <typename T = uintptr_t> static T get_copyMaterial() {
		return ((T (*)(void *))(Il2CppBase() + 0x414A6A4))(0);
	}
	template <typename T = void> static T BlitFullscreenTriangle(uintptr_t cmd, uintptr_t source, uintptr_t destination, bool clear) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x414A86C))(0, cmd, source, destination, clear);
	}
	template <typename T = void> static T BlitFullscreenTriangle_1(uintptr_t cmd, uintptr_t source, uintptr_t destination, uintptr_t propertySheet, int32_t pass, bool clear) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x414AB04))(0, cmd, source, destination, propertySheet, pass, clear);
	}
	template <typename T = void> static T BlitFullscreenTriangle_2(uintptr_t cmd, uintptr_t source, uintptr_t destination, uintptr_t mat, int32_t pass, bool clear) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x414ADCC))(0, cmd, source, destination, mat, pass, clear);
	}
	template <typename T = void> static T BlitFullscreenTriangle_3(uintptr_t source, uintptr_t destination, uintptr_t material, int32_t pass) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x414B058))(0, source, destination, material, pass);
	}
	template <typename T = bool> static T get_isAndroidOpenGL() {
		return ((T (*)(void *))(Il2CppBase() + 0x414B320))(0);
	}
	template <typename T = void> static T Destroy(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x414B360))(0, obj);
	}
	template <typename T = bool> static T get_isLinearColorSpace() {
		return ((T (*)(void *))(Il2CppBase() + 0x414B490))(0);
	}
	template <typename T = bool> static T IsResolvedDepthAvailable(uintptr_t camera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x414B4B0))(0, camera);
	}
	template <typename T = void*> static T GetAllSceneObjects() {
		return ((T (*)(void *))(Il2CppBase() + 0x45F55E0))(0);
	}
	template <typename T = float> static T Exp2(float x) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x414B5B4))(0, x);
	}
	template <typename T = void*> static T GetAllAssemblyTypes() {
		return ((T (*)(void *))(Il2CppBase() + 0x414B6AC))(0);
	}
	template <typename T = uintptr_t> static T GetAttribute(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335F338))(0, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetMemberAttributes(void* expr) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1B89EB8))(0, expr);
	}
	template <typename T = Il2CppString*> static T GetFieldPath(void* expr) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E7748C))(0, expr);
	}
	template <typename T = void*> static T GetAllAssemblyTypesm__0(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x414B828))(0, t);
	}

};

}
