#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareData"));
	}

	template <typename T = bool> T& isCaptureTexture() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isLoadoutForceShow() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& downFromPandora() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& disableLogo() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& disablePlayerInfo() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& disableCaptureTexture() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& shareOnCaptureShown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& reportData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetIsCaptureTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ResetIsCaptureTexture(bool isCapture) {
		return ((T (*)(ShareData*, bool))(Il2CppBase() + 0x4490650))(this, isCapture);
	}
	template <typename T = uintptr_t> T GetData() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x4494A84))(this);
	}
	template <typename T = uintptr_t> static T get_defautData() {
		return ((T (*)(void *))(Il2CppBase() + 0x4498A68))(0);
	}
	template <typename T = bool> T get_isShowLogo() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x44945E0))(this);
	}
	template <typename T = bool> T get_isShowPlayerInfo() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x44945A8))(this);
	}
	template <typename T = bool> T get_isCaptureTexture() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x4498024))(this);
	}
	template <typename T = void> T set_isCaptureTexture(bool value) {
		return ((T (*)(ShareData*, bool))(Il2CppBase() + 0x4498A60))(this, value);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x44933FC))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(ShareData*, uintptr_t))(Il2CppBase() + 0x4498A38))(this, value);
	}
	template <typename T = uintptr_t> T get_data() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x4494F1C))(this);
	}
	template <typename T = void> T set_data(uintptr_t value) {
		return ((T (*)(ShareData*, uintptr_t))(Il2CppBase() + 0x4498A40))(this, value);
	}
	template <typename T = bool> T get_isLoadoutForceShow() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x4498B08))(this);
	}
	template <typename T = void> T set_isLoadoutForceShow(bool value) {
		return ((T (*)(ShareData*, bool))(Il2CppBase() + 0x4498A48))(this, value);
	}
	template <typename T = bool> T get_downFromPandora() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x4498B10))(this);
	}
	template <typename T = void> T set_downFromPandora(bool value) {
		return ((T (*)(ShareData*, bool))(Il2CppBase() + 0x4498A50))(this, value);
	}
	template <typename T = bool> T get_disableLogo() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x4498AF0))(this);
	}
	template <typename T = void> T set_disableLogo(bool value) {
		return ((T (*)(ShareData*, bool))(Il2CppBase() + 0x4490700))(this, value);
	}
	template <typename T = bool> T get_disablePlayerInfo() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x4498B00))(this);
	}
	template <typename T = void> T set_disablePlayerInfo(bool value) {
		return ((T (*)(ShareData*, bool))(Il2CppBase() + 0x448F948))(this, value);
	}
	template <typename T = bool> T get_disableCaptureTexture() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x4498A58))(this);
	}
	template <typename T = void> T set_disableCaptureTexture(bool value) {
		return ((T (*)(ShareData*, bool))(Il2CppBase() + 0x4490708))(this, value);
	}
	template <typename T = uintptr_t> T get_shareOnCaptureShown() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x4498AF8))(this);
	}
	template <typename T = void> T set_shareOnCaptureShown(uintptr_t value) {
		return ((T (*)(ShareData*, uintptr_t))(Il2CppBase() + 0x448F950))(this, value);
	}
	template <typename T = uintptr_t> T get_reportData() {
		return ((T (*)(ShareData*))(Il2CppBase() + 0x4479B9C))(this);
	}
	template <typename T = void> T set_reportData(uintptr_t value) {
		return ((T (*)(ShareData*, uintptr_t))(Il2CppBase() + 0x448FB30))(this, value);
	}

};

}
