#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class FrontEndAvatarAudio
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "FrontEndAvatarAudio"));
	}

	template <typename T = uintptr_t> T& audioComp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& disableAudio() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& roleId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& soundSuffix() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEventSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAllSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLeftHandPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRoleID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T set_RoleID(uint32_t value) {
		return ((T (*)(FrontEndAvatarAudio*, uint32_t))(Il2CppBase() + 0x3676BD8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(FrontEndAvatarAudio*))(Il2CppBase() + 0x3676CF4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(FrontEndAvatarAudio*))(Il2CppBase() + 0x3676EAC))(this);
	}
	template <typename T = void> T PlayEventSound(Il2CppString* soundName) {
		return ((T (*)(FrontEndAvatarAudio*, Il2CppString*))(Il2CppBase() + 0x3677074))(this, soundName);
	}
	template <typename T = void> T SetSwitch(Il2CppString* switchName) {
		return ((T (*)(FrontEndAvatarAudio*, Il2CppString*))(Il2CppBase() + 0x36773F8))(this, switchName);
	}
	template <typename T = bool> T get_DisableAvatarAudio() {
		return ((T (*)(FrontEndAvatarAudio*))(Il2CppBase() + 0x36775A8))(this);
	}
	template <typename T = void> T set_DisableAvatarAudio(bool value) {
		return ((T (*)(FrontEndAvatarAudio*, bool))(Il2CppBase() + 0x36775B0))(this, value);
	}
	template <typename T = void> T StopAllSound() {
		return ((T (*)(FrontEndAvatarAudio*))(Il2CppBase() + 0x3676F50))(this);
	}
	template <typename T = void> T ChangeLeftHandPose() {
		return ((T (*)(FrontEndAvatarAudio*))(Il2CppBase() + 0x36775B8))(this);
	}
	template <typename T = void> T CheckRoleID() {
		return ((T (*)(FrontEndAvatarAudio*))(Il2CppBase() + 0x3676BE0))(this);
	}

};

}
