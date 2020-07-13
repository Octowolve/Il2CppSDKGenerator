#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class IMatchMsgScheduleObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "IMatchMsgScheduleObject"));
	}


	template <typename T = void> T CloneFromData(uintptr_t data) {
		return ((T (*)(IMatchMsgScheduleObject*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = uint32_t> T get_ProtocolCmd() {
		return ((T (*)(IMatchMsgScheduleObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_ProtocolCmd(uint32_t value) {
		return ((T (*)(IMatchMsgScheduleObject*, uint32_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
