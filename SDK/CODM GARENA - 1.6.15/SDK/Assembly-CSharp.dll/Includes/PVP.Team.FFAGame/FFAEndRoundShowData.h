#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.FFAGame {

class FFAEndRoundShowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.FFAGame", "FFAEndRoundShowData"));
	}

	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& PeakLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Kill() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Death() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Assists() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& AvatarPicInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
