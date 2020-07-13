#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GameCommunicationLineSimpleConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GameCommunicationLineSimpleConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SystemMsgID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& BRSystemMsgID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ChaMsgIDArray() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BRChaMsgIDArray() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& TeamCountLimit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& AreaLimit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& CDLimit() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Priority3P() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& PriorityType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& EffectiveDuration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ConditionalReservation() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& ChaPlayType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SceneMarkType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& ItemType() {
		return *(T*)((uintptr_t)this + 0x50);
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
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x46462CC))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464636C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646374))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464637C))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646384))(this, value);
	}
	template <typename T = int32_t> T get_SystemMsgID() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464638C))(this);
	}
	template <typename T = void> T set_SystemMsgID(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646394))(this, value);
	}
	template <typename T = int32_t> T get_BRSystemMsgID() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464639C))(this);
	}
	template <typename T = void> T set_BRSystemMsgID(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x46463A4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ChaMsgIDArray() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x46463AC))(this);
	}
	template <typename T = void> T set_ChaMsgIDArray(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46463B4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BRChaMsgIDArray() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x46463BC))(this);
	}
	template <typename T = void> T set_BRChaMsgIDArray(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46463C4))(this, value);
	}
	template <typename T = int32_t> T get_TeamCountLimit() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x46463CC))(this);
	}
	template <typename T = void> T set_TeamCountLimit(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x46463D4))(this, value);
	}
	template <typename T = int32_t> T get_AreaLimit() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x46463DC))(this);
	}
	template <typename T = void> T set_AreaLimit(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x46463E4))(this, value);
	}
	template <typename T = int32_t> T get_CDLimit() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x46463EC))(this);
	}
	template <typename T = void> T set_CDLimit(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x46463F4))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x46463FC))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646404))(this, value);
	}
	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464640C))(this);
	}
	template <typename T = void> T set_Priority(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646414))(this, value);
	}
	template <typename T = int32_t> T get_Priority3P() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464641C))(this);
	}
	template <typename T = void> T set_Priority3P(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646424))(this, value);
	}
	template <typename T = int32_t> T get_PriorityType() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464642C))(this);
	}
	template <typename T = void> T set_PriorityType(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646434))(this, value);
	}
	template <typename T = int32_t> T get_EffectiveDuration() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464643C))(this);
	}
	template <typename T = void> T set_EffectiveDuration(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646444))(this, value);
	}
	template <typename T = int32_t> T get_ConditionalReservation() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464644C))(this);
	}
	template <typename T = void> T set_ConditionalReservation(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646454))(this, value);
	}
	template <typename T = int32_t> T get_ChaPlayType() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464645C))(this);
	}
	template <typename T = void> T set_ChaPlayType(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646464))(this, value);
	}
	template <typename T = int32_t> T get_SceneMarkType() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464646C))(this);
	}
	template <typename T = void> T set_SceneMarkType(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646474))(this, value);
	}
	template <typename T = int32_t> T get_ItemType() {
		return ((T (*)(GameCommunicationLineSimpleConfig*))(Il2CppBase() + 0x464647C))(this);
	}
	template <typename T = void> T set_ItemType(int32_t value) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, int32_t))(Il2CppBase() + 0x4646484))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GameCommunicationLineSimpleConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x464648C))(this, bytes, position);
	}

};

}
