#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class IOpen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired.Shared", "IOpen"));
	}


	template <typename T = void> T OpenFolderToDisplayFile(Il2CppString* filePath) {
		return ((T (*)(IOpen*, Il2CppString*))(Il2CppBase() + 0x0))(this, filePath);
	}

};

}
