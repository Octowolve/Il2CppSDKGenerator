#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareLogoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareLogoComponent"));
	}

	template <typename T = uintptr_t> T& logoGameObject() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& qrCodeGameObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& logoWidget() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& qrCodeTexture() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& depth() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& table() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLogoActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetQRActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetQRCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T ResetActive(bool active) {
		return ((T (*)(ShareLogoComponent*, bool))(Il2CppBase() + 0x44946F4))(this, active);
	}
	template <typename T = void> T Reset(bool logoActive, bool qrActive) {
		return ((T (*)(ShareLogoComponent*, bool, bool))(Il2CppBase() + 0x4494618))(this, logoActive, qrActive);
	}
	template <typename T = void> T ResetLogoActive(bool active) {
		return ((T (*)(ShareLogoComponent*, bool))(Il2CppBase() + 0x4498D6C))(this, active);
	}
	template <typename T = void> T ResetQRActive(bool active) {
		return ((T (*)(ShareLogoComponent*, bool))(Il2CppBase() + 0x44992EC))(this, active);
	}
	template <typename T = void> T ResetQRCode(bool active) {
		return ((T (*)(ShareLogoComponent*, bool))(Il2CppBase() + 0x4498E68))(this, active);
	}
	template <typename T = void> T ResetTable() {
		return ((T (*)(ShareLogoComponent*))(Il2CppBase() + 0x44991D0))(this);
	}
	template <typename T = void> T ResetDepth() {
		return ((T (*)(ShareLogoComponent*))(Il2CppBase() + 0x4498C60))(this);
	}

};

}
