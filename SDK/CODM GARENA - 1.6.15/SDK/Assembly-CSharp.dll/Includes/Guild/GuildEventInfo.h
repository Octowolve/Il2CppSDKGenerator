#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildEventInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildEventInfo"));
	}

	template <typename T = uintptr_t> T& EventType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& EventTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& DayString() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& TimeString() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& OperatorPlayerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& OperatorPlayerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& OperatorPlayerSocialName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OperatorPicInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsOperatorCaptain() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsOperatorViceCaptain() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uint64_t> T& BeOperatePlayerID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& BeOperatePlayerName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& BeOperatePlayerSocialName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& AsCaptain() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& AsViceCaptain() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = Il2CppString*> T& Content_1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Content_2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildGuildEventInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T BuildGuildEventInfo(uintptr_t data, uintptr_t guildDataStore) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BB8A20))(0, data, guildDataStore);
	}

};

}
