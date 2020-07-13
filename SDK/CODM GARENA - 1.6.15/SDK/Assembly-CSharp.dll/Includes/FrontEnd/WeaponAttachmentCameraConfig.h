#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class WeaponAttachmentCameraConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "WeaponAttachmentCameraConfig"));
	}

	template <typename T = uintptr_t> T& Weapon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Camera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Camera_CameraRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Camera_WeaponRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Tester() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& AttachmentType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_WeaponAttachPointConfigPath() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchWeapon2CameraCoord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchCamera2WeaponCoord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAttachPointConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFocusPosAndRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppVector3> T SwitchWeapon2CameraCoord(Il2CppVector3 pos) {
		return ((T (*)(WeaponAttachmentCameraConfig*, Il2CppVector3))(Il2CppBase() + 0x3880B04))(this, pos);
	}
	template <typename T = Il2CppVector3> T SwitchCamera2WeaponCoord(Il2CppVector3 pos) {
		return ((T (*)(WeaponAttachmentCameraConfig*, Il2CppVector3))(Il2CppBase() + 0x3880CD4))(this, pos);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WeaponAttachmentCameraConfig*))(Il2CppBase() + 0x3880EA4))(this);
	}
	template <typename T = void> T SetWeaponAttachPointConfigPath(uintptr_t WeaponTrans, uintptr_t type, Il2CppString* path) {
		return ((T (*)(WeaponAttachmentCameraConfig*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x38813B4))(this, WeaponTrans, type, path);
	}
	template <typename T = void> T GetFocusPosAndRot(uintptr_t type, uintptr_t* outPos, uintptr_t* outRot) {
		return ((T (*)(WeaponAttachmentCameraConfig*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3881014))(this, type, outPos, outRot);
	}

};

}
