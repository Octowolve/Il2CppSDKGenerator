#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderPromitionResultWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderPromitionResultWindowView"));
	}

	template <typename T = uintptr_t> T& Success() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& Fail() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_SpvpLadderDS() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_SpvpLadderDS() {
		return ((T (*)(SpvpLadderPromitionResultWindowView*))(Il2CppBase() + 0x4304B3C))(this);
	}
	template <typename T = void> T UpdateView(bool success) {
		return ((T (*)(SpvpLadderPromitionResultWindowView*, bool))(Il2CppBase() + 0x4304924))(this, success);
	}
	template <typename T = void> T UpdateSuccess() {
		return ((T (*)(SpvpLadderPromitionResultWindowView*))(Il2CppBase() + 0x4304BEC))(this);
	}
	template <typename T = void> T UpdateFail() {
		return ((T (*)(SpvpLadderPromitionResultWindowView*))(Il2CppBase() + 0x4304EBC))(this);
	}

};

}
