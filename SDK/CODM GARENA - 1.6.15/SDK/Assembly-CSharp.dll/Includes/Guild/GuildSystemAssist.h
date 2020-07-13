#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGuildBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompleteGuildRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateRemainImpeachTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGuildSloganLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenGuildOnJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_guildDataStore() {
		return ((T (*)(GuildSystemAssist*))(Il2CppBase() + 0x3BF4B74))(this);
	}
	template <typename T = void> T RequestGuildBase() {
		return ((T (*)(GuildSystemAssist*))(Il2CppBase() + 0x3BF4C10))(this);
	}
	template <typename T = bool> T HasGuild() {
		return ((T (*)(GuildSystemAssist*))(Il2CppBase() + 0x3BEA3FC))(this);
	}
	template <typename T = void> T CompleteGuildRedDot() {
		return ((T (*)(GuildSystemAssist*))(Il2CppBase() + 0x3BEA628))(this);
	}
	template <typename T = Il2CppString*> T CalculateRemainImpeachTime() {
		return ((T (*)(GuildSystemAssist*))(Il2CppBase() + 0x3BD35D0))(this);
	}
	template <typename T = bool> T CheckGuildSloganLength(Il2CppString* slogan) {
		return ((T (*)(GuildSystemAssist*, Il2CppString*))(Il2CppBase() + 0x3BC8C38))(this, slogan);
	}
	template <typename T = int32_t> T GetTextLength(Il2CppString* oriText) {
		return ((T (*)(GuildSystemAssist*, Il2CppString*))(Il2CppBase() + 0x3BF4E14))(this, oriText);
	}
	template <typename T = Il2CppString*> static T GetRankStr(int32_t rank, int32_t permile) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3BC9CC0))(0, rank, permile);
	}
	template <typename T = bool> static T OpenGuildOnJoin() {
		return ((T (*)(void *))(Il2CppBase() + 0x3BF4F30))(0);
	}

};

}
