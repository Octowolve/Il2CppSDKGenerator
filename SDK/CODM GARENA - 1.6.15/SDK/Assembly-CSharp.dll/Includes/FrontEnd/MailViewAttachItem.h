#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailViewAttachItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailViewAttachItem"));
	}

	template <typename T = uintptr_t> T& ICON() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ClickBox() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& QualityLine() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetContent(int32_t ItemId, int32_t num) {
		return ((T (*)(MailViewAttachItem*, int32_t, int32_t))(Il2CppBase() + 0x3839470))(this, ItemId, num);
	}

};

}
