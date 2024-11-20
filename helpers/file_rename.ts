/**
 * Helper script to rename document.pdf to appropiate pdf name with lab numbers
 * and to rename n.c to task_n.c format
 */

const dirs = Deno.readDir("./");

for await (const dir of dirs) {
    if (!dir.isDirectory) continue;
  const dirpath = `./${dir.name}`;
  const files = Deno.readDir(dirpath);
  for await (const file of files) {
    const filepath = `${dirpath}/${file.name}`;
    if (file.name === "document.pdf") {
        const lab = dir.name.replace("lab_", "");
        Deno.rename(filepath, `${dirpath}/CSE_4108_Lab${lab}_2A.pdf`)
    }

    if (file.name.endsWith('.c')) {
        Deno.rename(filepath, `${dirpath}/task_${file.name}`);
    }
  }
}