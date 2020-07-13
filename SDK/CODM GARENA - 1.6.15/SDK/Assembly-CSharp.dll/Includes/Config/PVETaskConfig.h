#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PVETaskConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PVETaskConfig"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Content() {
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
		return ((T (*)(PVETaskConfig*))(Il2CppBase() + 0x378C1D0))(this);
	}
	template <typename T = Il2CppString*> T get_Key() {
		return ((T (*)(PVETaskConfig*))(Il2CppBase() + 0x378C270))(this);
	}
	template <typename T = void> T set_Key(Il2CppString* value) {
		return ((T (*)(PVETaskConfig*, Il2CppString*))(Il2CppBase() + 0x378C278))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Content() {
		return ((T (*)(PVETaskConfig*))(Il2CppBase() + 0x378C280))(this);
	}
	template <typename T = void> T set_LOCID_Content(Il2CppString* value) {
		return ((T (*)(PVETaskConfig*, Il2CppString*))(Il2CppBase() + 0x378C288))(this, value);
	}
	template <typename T = Il2CppString*> T get_Content() {
		return ((T (*)(PVETaskConfig*))(Il2CppBase() + 0x378C290))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PVETaskConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378C2A0))(this, bytes, position);
	}

};

}
