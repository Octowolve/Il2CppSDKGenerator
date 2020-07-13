#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRZiplineItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRZiplineItem"));
	}

	template <typename T = uintptr_t> T& RotationRootY() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& RotationRootZ() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Socket() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& SocketOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& SocketAngleOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& StartPosOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& StartPosOffsetTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
