#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ServerReportAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ServerReportAction"));
	}

	template <typename T = int32_t> T& Val() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsHardMode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ServerReportAction*))(Il2CppBase() + 0x4FB07A4))(this);
	}

};

}
