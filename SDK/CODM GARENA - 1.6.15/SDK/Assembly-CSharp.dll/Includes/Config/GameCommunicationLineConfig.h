#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GameCommunicationLineConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GameCommunicationLineConfig"));
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
	template <typename T = int32_t> T& MPTeamCountLimit() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& BRTMForbidden() {
		return *(T*)((uintptr_t)this + 0x58);
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
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645A64))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645B04))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645B0C))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645B14))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645B1C))(this, value);
	}
	template <typename T = int32_t> T get_SystemMsgID() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645B24))(this);
	}
	template <typename T = void> T set_SystemMsgID(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645B2C))(this, value);
	}
	template <typename T = int32_t> T get_BRSystemMsgID() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645B34))(this);
	}
	template <typename T = void> T set_BRSystemMsgID(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645B3C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ChaMsgIDArray() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645B44))(this);
	}
	template <typename T = void> T set_ChaMsgIDArray(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GameCommunicationLineConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4645B4C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BRChaMsgIDArray() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645B54))(this);
	}
	template <typename T = void> T set_BRChaMsgIDArray(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GameCommunicationLineConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4645B5C))(this, value);
	}
	template <typename T = int32_t> T get_TeamCountLimit() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645B64))(this);
	}
	template <typename T = void> T set_TeamCountLimit(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645B6C))(this, value);
	}
	template <typename T = int32_t> T get_AreaLimit() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645B74))(this);
	}
	template <typename T = void> T set_AreaLimit(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645B7C))(this, value);
	}
	template <typename T = int32_t> T get_CDLimit() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645B84))(this);
	}
	template <typename T = void> T set_CDLimit(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645B8C))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645B94))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645B9C))(this, value);
	}
	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645BA4))(this);
	}
	template <typename T = void> T set_Priority(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645BAC))(this, value);
	}
	template <typename T = int32_t> T get_Priority3P() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645BB4))(this);
	}
	template <typename T = void> T set_Priority3P(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645BBC))(this, value);
	}
	template <typename T = int32_t> T get_PriorityType() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645BC4))(this);
	}
	template <typename T = void> T set_PriorityType(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645BCC))(this, value);
	}
	template <typename T = int32_t> T get_EffectiveDuration() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645BD4))(this);
	}
	template <typename T = void> T set_EffectiveDuration(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645BDC))(this, value);
	}
	template <typename T = int32_t> T get_ConditionalReservation() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645BE4))(this);
	}
	template <typename T = void> T set_ConditionalReservation(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645BEC))(this, value);
	}
	template <typename T = int32_t> T get_ChaPlayType() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645BF4))(this);
	}
	template <typename T = void> T set_ChaPlayType(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645BFC))(this, value);
	}
	template <typename T = int32_t> T get_SceneMarkType() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645C04))(this);
	}
	template <typename T = void> T set_SceneMarkType(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645C0C))(this, value);
	}
	template <typename T = int32_t> T get_ItemType() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645C14))(this);
	}
	template <typename T = void> T set_ItemType(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645C1C))(this, value);
	}
	template <typename T = int32_t> T get_MPTeamCountLimit() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645C24))(this);
	}
	template <typename T = void> T set_MPTeamCountLimit(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645C2C))(this, value);
	}
	template <typename T = int32_t> T get_BRTMForbidden() {
		return ((T (*)(GameCommunicationLineConfig*))(Il2CppBase() + 0x4645C34))(this);
	}
	template <typename T = void> T set_BRTMForbidden(int32_t value) {
		return ((T (*)(GameCommunicationLineConfig*, int32_t))(Il2CppBase() + 0x4645C3C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GameCommunicationLineConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4645C44))(this, bytes, position);
	}

};

}
