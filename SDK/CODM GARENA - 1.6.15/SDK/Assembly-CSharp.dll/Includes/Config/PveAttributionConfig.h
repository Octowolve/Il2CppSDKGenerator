#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PveAttributionConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PveAttributionConfig"));
	}

	template <typename T = int32_t> T& AttrID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& IsPercentage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& TalentSpriteName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
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
		return ((T (*)(PveAttributionConfig*))(Il2CppBase() + 0x3785B80))(this);
	}
	template <typename T = int32_t> T get_AttrID() {
		return ((T (*)(PveAttributionConfig*))(Il2CppBase() + 0x3785C20))(this);
	}
	template <typename T = void> T set_AttrID(int32_t value) {
		return ((T (*)(PveAttributionConfig*, int32_t))(Il2CppBase() + 0x3785C28))(this, value);
	}
	template <typename T = int32_t> T get_IsPercentage() {
		return ((T (*)(PveAttributionConfig*))(Il2CppBase() + 0x3785C30))(this);
	}
	template <typename T = void> T set_IsPercentage(int32_t value) {
		return ((T (*)(PveAttributionConfig*, int32_t))(Il2CppBase() + 0x3785C38))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(PveAttributionConfig*))(Il2CppBase() + 0x3785C40))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(PveAttributionConfig*, Il2CppString*))(Il2CppBase() + 0x3785C48))(this, value);
	}
	template <typename T = Il2CppString*> T get_TalentSpriteName() {
		return ((T (*)(PveAttributionConfig*))(Il2CppBase() + 0x3785C50))(this);
	}
	template <typename T = void> T set_TalentSpriteName(Il2CppString* value) {
		return ((T (*)(PveAttributionConfig*, Il2CppString*))(Il2CppBase() + 0x3785C58))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(PveAttributionConfig*))(Il2CppBase() + 0x3785C60))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(PveAttributionConfig*, Il2CppString*))(Il2CppBase() + 0x3785C68))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(PveAttributionConfig*))(Il2CppBase() + 0x3785C70))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(PveAttributionConfig*))(Il2CppBase() + 0x3785C80))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(PveAttributionConfig*, Il2CppString*))(Il2CppBase() + 0x3785C88))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(PveAttributionConfig*))(Il2CppBase() + 0x3785C90))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PveAttributionConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3785CA0))(this, bytes, position);
	}

};

}
