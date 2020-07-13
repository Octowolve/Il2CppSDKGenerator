#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Core {

class INameTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Core", "INameTransform"));
	}


	template <typename T = Il2CppString*> T TransformFile(Il2CppString* name) {
		return ((T (*)(INameTransform*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = Il2CppString*> T TransformDirectory(Il2CppString* name) {
		return ((T (*)(INameTransform*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}

};

}
