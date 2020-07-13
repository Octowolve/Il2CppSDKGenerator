#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class TalentTreeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "TalentTreeConfig"));
	}

	template <typename T = int32_t> T& TalentGroupId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& TalentId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& FatherNode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& UnlockType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& AddObjId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AddObjValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& TalentPoints() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& TalentSpriteName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ColIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& RowIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& BasicPower() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& LOCID_TalentName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LOCID_TalentDesc() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_TalentGroupId() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE32C))(this);
	}
	template <typename T = void> T set_TalentGroupId(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE334))(this, value);
	}
	template <typename T = int32_t> T get_TalentId() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE33C))(this);
	}
	template <typename T = void> T set_TalentId(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE344))(this, value);
	}
	template <typename T = int32_t> T get_FatherNode() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE34C))(this);
	}
	template <typename T = void> T set_FatherNode(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE354))(this, value);
	}
	template <typename T = int32_t> T get_UnlockType() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE35C))(this);
	}
	template <typename T = void> T set_UnlockType(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE364))(this, value);
	}
	template <typename T = int32_t> T get_AddObjId() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE36C))(this);
	}
	template <typename T = void> T set_AddObjId(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE374))(this, value);
	}
	template <typename T = int32_t> T get_AddObjValue() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE37C))(this);
	}
	template <typename T = void> T set_AddObjValue(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE384))(this, value);
	}
	template <typename T = int32_t> T get_TalentPoints() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE38C))(this);
	}
	template <typename T = void> T set_TalentPoints(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE394))(this, value);
	}
	template <typename T = Il2CppString*> T get_TalentSpriteName() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE39C))(this);
	}
	template <typename T = void> T set_TalentSpriteName(Il2CppString* value) {
		return ((T (*)(TalentTreeConfig*, Il2CppString*))(Il2CppBase() + 0x30EE3A4))(this, value);
	}
	template <typename T = int32_t> T get_ColIndex() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE3AC))(this);
	}
	template <typename T = void> T set_ColIndex(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE3B4))(this, value);
	}
	template <typename T = int32_t> T get_RowIndex() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE3BC))(this);
	}
	template <typename T = void> T set_RowIndex(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE3C4))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE3CC))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE3D4))(this, value);
	}
	template <typename T = int32_t> T get_BasicPower() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE3DC))(this);
	}
	template <typename T = void> T set_BasicPower(int32_t value) {
		return ((T (*)(TalentTreeConfig*, int32_t))(Il2CppBase() + 0x30EE3E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_TalentName() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE3EC))(this);
	}
	template <typename T = void> T set_LOCID_TalentName(Il2CppString* value) {
		return ((T (*)(TalentTreeConfig*, Il2CppString*))(Il2CppBase() + 0x30EE3F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_TalentName() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE3FC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_TalentDesc() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE40C))(this);
	}
	template <typename T = void> T set_LOCID_TalentDesc(Il2CppString* value) {
		return ((T (*)(TalentTreeConfig*, Il2CppString*))(Il2CppBase() + 0x30EE414))(this, value);
	}
	template <typename T = Il2CppString*> T get_TalentDesc() {
		return ((T (*)(TalentTreeConfig*))(Il2CppBase() + 0x30EE41C))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(TalentTreeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EE42C))(this, bytes, position);
	}

};

}
