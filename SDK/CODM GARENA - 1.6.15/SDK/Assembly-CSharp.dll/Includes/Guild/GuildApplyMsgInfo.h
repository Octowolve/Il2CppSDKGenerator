#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildApplyMsgInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildApplyMsgInfo"));
	}

	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& PlayerSocialName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PeakLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& ApplyTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& ApplyTimeString() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& Handed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& Agree() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& HeadInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ladder_level() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& show_ladder() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
