#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PveGameModeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PveGameModeConfConfig"));
	}

	template <typename T = int32_t> T& GameMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& GameModeType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_BriefDesc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& IconResource() {
		return *(T*)((uintptr_t)this + 0x20);
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

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(PveGameModeConfConfig*))(Il2CppBase() + 0x378AC70))(this);
	}
	template <typename T = int32_t> T get_GameMode() {
		return ((T (*)(PveGameModeConfConfig*))(Il2CppBase() + 0x378AD10))(this);
	}
	template <typename T = void> T set_GameMode(int32_t value) {
		return ((T (*)(PveGameModeConfConfig*, int32_t))(Il2CppBase() + 0x378AD18))(this, value);
	}
	template <typename T = Il2CppString*> T get_GameModeType() {
		return ((T (*)(PveGameModeConfConfig*))(Il2CppBase() + 0x378AD20))(this);
	}
	template <typename T = void> T set_GameModeType(Il2CppString* value) {
		return ((T (*)(PveGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x378AD28))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(PveGameModeConfConfig*))(Il2CppBase() + 0x378AD30))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(PveGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x378AD38))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PveGameModeConfConfig*))(Il2CppBase() + 0x378AD40))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(PveGameModeConfConfig*))(Il2CppBase() + 0x378AD50))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(PveGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x378AD58))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(PveGameModeConfConfig*))(Il2CppBase() + 0x378AD60))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_BriefDesc() {
		return ((T (*)(PveGameModeConfConfig*))(Il2CppBase() + 0x378AD70))(this);
	}
	template <typename T = void> T set_LOCID_BriefDesc(Il2CppString* value) {
		return ((T (*)(PveGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x378AD78))(this, value);
	}
	template <typename T = Il2CppString*> T get_BriefDesc() {
		return ((T (*)(PveGameModeConfConfig*))(Il2CppBase() + 0x378AD80))(this);
	}
	template <typename T = Il2CppString*> T get_IconResource() {
		return ((T (*)(PveGameModeConfConfig*))(Il2CppBase() + 0x378AD90))(this);
	}
	template <typename T = void> T set_IconResource(Il2CppString* value) {
		return ((T (*)(PveGameModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x378AD98))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PveGameModeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x378ADA0))(this, bytes, position);
	}

};

}
