#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildBaseInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildBaseInfo"));
	}

	template <typename T = uint64_t> T& GuildID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Slogan() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Billboard() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LabelType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Location() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& DailyActive() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& WeekActive() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& SeasonActive() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& AllowJoin() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& JoinLevel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& NeedApproval() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint64_t> T& ImpeachMemberID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& ImpeachTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& ImpeachLimitSecond() {
		return *(T*)((uintptr_t)this + 0x4C);
	}


};

}
