#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomBrBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomBrBaseView"));
	}

	template <typename T = uintptr_t> T& LabelTeamInfo() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& SpriteTeamTypeEnums() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& ContainerAutoFill() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& BtnAutoFill() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& BtnCancelAutoFill() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& AnchorLeftBottom() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& AnchorRightBottom() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& brInfoData() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
