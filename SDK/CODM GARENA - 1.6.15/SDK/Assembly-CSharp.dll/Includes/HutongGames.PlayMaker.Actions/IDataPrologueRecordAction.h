#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class IDataPrologueRecordAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "IDataPrologueRecordAction"));
	}

	template <typename T = uintptr_t> T& IDataType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Status() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(IDataPrologueRecordAction*))(Il2CppBase() + 0x4F09028))(this);
	}

};

}
