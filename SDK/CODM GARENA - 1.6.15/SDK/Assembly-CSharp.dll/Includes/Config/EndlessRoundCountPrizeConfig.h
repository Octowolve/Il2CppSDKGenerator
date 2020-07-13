#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class EndlessRoundCountPrizeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "EndlessRoundCountPrizeConfig"));
	}

	template <typename T = uintptr_t> T& beginDateTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& endDateTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& beginTimeStamp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& endTimeStamp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& BeginTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& RewardNum() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& BoxId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& RoundCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(EndlessRoundCountPrizeConfig*))(Il2CppBase() + 0x4643200))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(EndlessRoundCountPrizeConfig*))(Il2CppBase() + 0x46435C0))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(EndlessRoundCountPrizeConfig*, int32_t))(Il2CppBase() + 0x46435C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_BeginTime() {
		return ((T (*)(EndlessRoundCountPrizeConfig*))(Il2CppBase() + 0x46435B0))(this);
	}
	template <typename T = void> T set_BeginTime(Il2CppString* value) {
		return ((T (*)(EndlessRoundCountPrizeConfig*, Il2CppString*))(Il2CppBase() + 0x46435D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(EndlessRoundCountPrizeConfig*))(Il2CppBase() + 0x46435B8))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(EndlessRoundCountPrizeConfig*, Il2CppString*))(Il2CppBase() + 0x46435D8))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum() {
		return ((T (*)(EndlessRoundCountPrizeConfig*))(Il2CppBase() + 0x46435E0))(this);
	}
	template <typename T = void> T set_RewardNum(int32_t value) {
		return ((T (*)(EndlessRoundCountPrizeConfig*, int32_t))(Il2CppBase() + 0x46435E8))(this, value);
	}
	template <typename T = int32_t> T get_BoxId() {
		return ((T (*)(EndlessRoundCountPrizeConfig*))(Il2CppBase() + 0x46435F0))(this);
	}
	template <typename T = void> T set_BoxId(int32_t value) {
		return ((T (*)(EndlessRoundCountPrizeConfig*, int32_t))(Il2CppBase() + 0x46435F8))(this, value);
	}
	template <typename T = int32_t> T get_RoundCount() {
		return ((T (*)(EndlessRoundCountPrizeConfig*))(Il2CppBase() + 0x4643600))(this);
	}
	template <typename T = void> T set_RoundCount(int32_t value) {
		return ((T (*)(EndlessRoundCountPrizeConfig*, int32_t))(Il2CppBase() + 0x4643608))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(EndlessRoundCountPrizeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4643610))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(EndlessRoundCountPrizeConfig*))(Il2CppBase() + 0x4643768))(this);
	}

};

}
