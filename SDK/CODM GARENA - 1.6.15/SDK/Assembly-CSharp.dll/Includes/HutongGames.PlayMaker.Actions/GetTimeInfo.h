#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetTimeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetTimeInfo"));
	}

	template <typename T = uintptr_t> T& getInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetTimeInfo*))(Il2CppBase() + 0x4EFFD90))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetTimeInfo*))(Il2CppBase() + 0x4EFFDA8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetTimeInfo*))(Il2CppBase() + 0x4EFFF3C))(this);
	}
	template <typename T = void> T DoGetTimeInfo() {
		return ((T (*)(GetTimeInfo*))(Il2CppBase() + 0x4EFFDD4))(this);
	}

};

}
