#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScreenShotDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScreenShotDataStore"));
	}

	template <typename T = uintptr_t> T& m_Texture() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& captureOnlyTexture() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& download() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& downloadFromCDN() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& shareData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloneReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x44798AC))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x44799E4))(this);
	}
	template <typename T = uintptr_t> T CloneReportData() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x4479AB0))(this);
	}
	template <typename T = uintptr_t> T get_Texture() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x4477A8C))(this);
	}
	template <typename T = void> T set_Texture(uintptr_t value) {
		return ((T (*)(ScreenShotDataStore*, uintptr_t))(Il2CppBase() + 0x4479D70))(this, value);
	}
	template <typename T = uintptr_t> T get_captureOnlyTexture() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x4479D78))(this);
	}
	template <typename T = void> T set_captureOnlyTexture(uintptr_t value) {
		return ((T (*)(ScreenShotDataStore*, uintptr_t))(Il2CppBase() + 0x4479AA8))(this, value);
	}
	template <typename T = uintptr_t> static T get_global() {
		return ((T (*)(void *))(Il2CppBase() + 0x4479D80))(0);
	}
	template <typename T = bool> T get_isReady() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x4479E1C))(this);
	}
	template <typename T = Il2CppString*> T get_url() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x4479E50))(this);
	}
	template <typename T = void> T set_url(Il2CppString* value) {
		return ((T (*)(ScreenShotDataStore*, Il2CppString*))(Il2CppBase() + 0x44799C4))(this, value);
	}
	template <typename T = bool> T get_download() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x4479E48))(this);
	}
	template <typename T = void> T set_download(bool value) {
		return ((T (*)(ScreenShotDataStore*, bool))(Il2CppBase() + 0x44799CC))(this, value);
	}
	template <typename T = bool> T get_downloadFromCDN() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x4479E40))(this);
	}
	template <typename T = void> T set_downloadFromCDN(bool value) {
		return ((T (*)(ScreenShotDataStore*, bool))(Il2CppBase() + 0x44799D4))(this, value);
	}
	template <typename T = void> T set_shareData(uintptr_t value) {
		return ((T (*)(ScreenShotDataStore*, uintptr_t))(Il2CppBase() + 0x44799DC))(this, value);
	}
	template <typename T = uintptr_t> T get_shareData() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x4479B94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x4479E58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(ScreenShotDataStore*))(Il2CppBase() + 0x4479E60))(this);
	}

};

}
