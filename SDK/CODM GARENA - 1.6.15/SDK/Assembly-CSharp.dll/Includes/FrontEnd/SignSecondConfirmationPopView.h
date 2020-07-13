#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignSecondConfirmationPopView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignSecondConfirmationPopView"));
	}

	template <typename T = uintptr_t> T& NumberLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ReClaimBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
