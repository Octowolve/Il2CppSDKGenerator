#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LadderTeamMateLimitConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LadderTeamMateLimitConfig"));
	}

	template <typename T = int32_t> T& Ladder_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Teammate_lower_limit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Teammate_upper_limit() {
		return *(T*)((uintptr_t)this + 0x14);
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
		return ((T (*)(LadderTeamMateLimitConfig*))(Il2CppBase() + 0x376E6A8))(this);
	}
	template <typename T = int32_t> T get_Ladder_level() {
		return ((T (*)(LadderTeamMateLimitConfig*))(Il2CppBase() + 0x376E748))(this);
	}
	template <typename T = void> T set_Ladder_level(int32_t value) {
		return ((T (*)(LadderTeamMateLimitConfig*, int32_t))(Il2CppBase() + 0x376E750))(this, value);
	}
	template <typename T = int32_t> T get_Teammate_lower_limit() {
		return ((T (*)(LadderTeamMateLimitConfig*))(Il2CppBase() + 0x376E758))(this);
	}
	template <typename T = void> T set_Teammate_lower_limit(int32_t value) {
		return ((T (*)(LadderTeamMateLimitConfig*, int32_t))(Il2CppBase() + 0x376E760))(this, value);
	}
	template <typename T = int32_t> T get_Teammate_upper_limit() {
		return ((T (*)(LadderTeamMateLimitConfig*))(Il2CppBase() + 0x376E768))(this);
	}
	template <typename T = void> T set_Teammate_upper_limit(int32_t value) {
		return ((T (*)(LadderTeamMateLimitConfig*, int32_t))(Il2CppBase() + 0x376E770))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LadderTeamMateLimitConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376E778))(this, bytes, position);
	}

};

}
