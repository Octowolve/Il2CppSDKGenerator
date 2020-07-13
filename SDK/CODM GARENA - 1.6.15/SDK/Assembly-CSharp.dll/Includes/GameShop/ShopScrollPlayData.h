#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopScrollPlayData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopScrollPlayData"));
	}

	template <typename T = int32_t> T& limitofferId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& skipParam() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& skipParamString() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& posterUrl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& pictureUrl() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& pictureUrlSmall() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& skipToShop() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& skipType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& specialTitle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& labelBG() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& labelContent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& showCutDown() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& endTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& showArea() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& openURL() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<int32_t>*> T& moduleSwitch() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& sort() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& bIsPandora() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& PandoraModule() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& PandoraTab() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& PandoraShowName() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& PandoraIconUrl() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& PandoraSortid() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& bShowPandoraRedPoint() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T CheckRedPoint() {
		return ((T (*)(ShopScrollPlayData*))(Il2CppBase() + 0x23AE8EC))(this);
	}

};

}
