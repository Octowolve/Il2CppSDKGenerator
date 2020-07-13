#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class IRoomInfoCellControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "IRoomInfoCellController_En"));
	}


	template <typename T = void> T OnClickCell(uintptr_t cell) {
		return ((T (*)(IRoomInfoCellControllerEn*, uintptr_t))(Il2CppBase() + 0x0))(this, cell);
	}

};

}
