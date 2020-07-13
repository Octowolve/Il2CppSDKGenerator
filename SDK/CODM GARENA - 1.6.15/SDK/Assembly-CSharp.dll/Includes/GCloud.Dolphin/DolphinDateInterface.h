#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DolphinDateInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DolphinDateInterface"));
	}


	template <typename T = Il2CppString*> T GetUpdateTempPath() {
		return ((T (*)(DolphinDateInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetUpdateSourceSavePath() {
		return ((T (*)(DolphinDateInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetUserDateString() {
		return ((T (*)(DolphinDateInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentSourceVersion() {
		return ((T (*)(DolphinDateInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentProgramVersion() {
		return ((T (*)(DolphinDateInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetUpdateApolloPath() {
		return ((T (*)(DolphinDateInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
