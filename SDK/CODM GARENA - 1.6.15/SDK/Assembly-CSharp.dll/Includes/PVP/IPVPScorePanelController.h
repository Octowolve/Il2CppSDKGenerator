#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class IPVPScorePanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "IPVPScorePanelController"));
	}


	template <typename T = void> T UpdateView() {
		return ((T (*)(IPVPScorePanelController*))(Il2CppBase() + 0x0))(this);
	}

};

}
