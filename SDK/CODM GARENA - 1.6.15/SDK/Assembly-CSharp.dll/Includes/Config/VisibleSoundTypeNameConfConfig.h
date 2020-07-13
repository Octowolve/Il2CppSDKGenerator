#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class VisibleSoundTypeNameConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "VisibleSoundTypeNameConfConfig"));
	}

	template <typename T = Il2CppString*> T& Audio_Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SoundTypeID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(VisibleSoundTypeNameConfConfig*))(Il2CppBase() + 0x30F2B78))(this);
	}
	template <typename T = Il2CppString*> T get_Audio_Name() {
		return ((T (*)(VisibleSoundTypeNameConfConfig*))(Il2CppBase() + 0x30F2C18))(this);
	}
	template <typename T = void> T set_Audio_Name(Il2CppString* value) {
		return ((T (*)(VisibleSoundTypeNameConfConfig*, Il2CppString*))(Il2CppBase() + 0x30F2C20))(this, value);
	}
	template <typename T = int32_t> T get_SoundTypeID() {
		return ((T (*)(VisibleSoundTypeNameConfConfig*))(Il2CppBase() + 0x30F2C28))(this);
	}
	template <typename T = void> T set_SoundTypeID(int32_t value) {
		return ((T (*)(VisibleSoundTypeNameConfConfig*, int32_t))(Il2CppBase() + 0x30F2C30))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(VisibleSoundTypeNameConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F2C38))(this, bytes, position);
	}

};

}
